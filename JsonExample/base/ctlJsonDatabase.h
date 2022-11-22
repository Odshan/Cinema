//---------------------------------------------------------------------------
#ifndef ctlJsonDatabaseH
#define ctlJsonDatabaseH
//---------------------------------------------------------------------------
#include "JsonObject.h"

#include <System.IOUtils.hpp>
#include <System.Json.hpp>
#include <System.SysUtils.hpp>
#include <System.hpp>
#include <vector>
#include <memory>
//---------------------------------------------------------------------------
template< typename TdataObject >
class TctlJsonDatabase
{
   String const d_datafile;

   std::vector< TdataObject * > d_items;

 public:
   void Reload()
   {
      while (!d_items.empty())
      {
         delete d_items.back();
         d_items.pop_back();
      }
      d_items.clear();

      String str = TFile::ReadAllText(d_datafile);

      std::unique_ptr< TJSONArray > arr(dynamic_cast< TJSONArray * >(TJSONObject::ParseJSONValue(TEncoding::UTF8->GetBytes(str), 0)));
      if (arr != nullptr)
      {
         auto jEnum = arr->GetEnumerator();
         while (jEnum->MoveNext() == true)
         {
            TJSONValue * myValue = jEnum->Current;
            TJSONObject *myObj   = dynamic_cast< TJSONObject * >(myValue);

            auto obj = new TdataObject();
            dynamic_cast< TJsonObject * >(obj)->FromJson(myObj);
            Add(obj);
         }
      }
   }

   void SaveToDisk() const
   {
      TFile::WriteAllText(d_datafile, AsString());
   }

   String AsString() const
   {
      std::unique_ptr< TJSONArray > arr(new TJSONArray());
      for (TJsonObject *item : d_items)
      {
         arr->Add(item->ToJson());
      }
      String s = arr->ToString();
      return arr->ToString();
   }

   void Add(TdataObject *aObject)
   {
      d_items.push_back(aObject);
   }

   std::vector< TdataObject * > const& List()const
   {
      return d_items;
   }

 protected:
   TctlJsonDatabase(String aDataFile) :
       d_datafile(TDirectory::GetCurrentDirectory() + "\\" + aDataFile)
   {
   }

 private:
};
//---------------------------------------------------------------------------
#endif

