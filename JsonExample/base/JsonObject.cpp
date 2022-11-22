//---------------------------------------------------------------------------
#pragma hdrstop
//---------------------------------------------------------------------------
#include "JsonObject.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
String TJsonObject::GetString(TJSONObject *const aJson, String aKey)
{
   auto o = dynamic_cast< TJSONString * >(aJson->GetValue(aKey));
   if (o != nullptr)
   {
      return o->Value();
   }

   return "";
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
int TJsonObject::GetInteger(TJSONObject *const aJson, String aKey)
{
   auto o    = dynamic_cast< TJSONNumber * >(aJson->GetValue(aKey));
   if (o != nullptr)
   {
	  return o->AsInt;
   }

   return 0;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
double TJsonObject::GetDouble(TJSONObject *const aJson, String aKey)
{
   auto o    = dynamic_cast< TJSONNumber * >(aJson->GetValue(aKey));
   if (o != nullptr)
   {
	  return o->AsDouble;
   }

   return 0.0;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void TJsonObject::AddPair(TJSONObject *aSource, String aKey, String aValue)
{
   aSource->AddPair(new TJSONPair(aKey, new TJSONString(aValue)));
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void TJsonObject::AddPair(TJSONObject *aSource, String aKey, int aValue)
{
   aSource->AddPair(new TJSONPair(aKey, new TJSONNumber(aValue)));
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void TJsonObject::AddPair(TJSONObject *aSource, String aKey, double aValue)
{
   aSource->AddPair(new TJSONPair(aKey, new TJSONNumber(aValue)));
}
//---------------------------------------------------------------------------

