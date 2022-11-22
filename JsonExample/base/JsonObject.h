//---------------------------------------------------------------------------
#ifndef JsonObjectH
#define JsonObjectH
//---------------------------------------------------------------------------
#include <System.Json.hpp>
//---------------------------------------------------------------------------
class TJsonObject
{
 public:
   virtual void         FromJson(TJSONObject *aObject) = 0;
   virtual TJSONObject *ToJson()                       = 0;

 protected:
   String GetString(TJSONObject *const aJson, String aKey);
   int    GetInteger(TJSONObject *const aJson, String aKey);
   double GetDouble(TJSONObject *const aJson, String aKey);

   void AddPair(TJSONObject *aSource, String aKey, String aValue);
   void AddPair(TJSONObject *aSource, String aKey, int aValue);
   void AddPair(TJSONObject *aSource, String aKey, double aValue);
};

#endif

