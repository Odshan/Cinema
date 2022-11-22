//---------------------------------------------------------------------------

#pragma hdrstop

#include "doObject.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

TdoObject::TdoObject()
{
}

void TdoObject::FromJson(TJSONObject *aObject)
{
   d_varString = GetString(aObject, "StringValue");
   d_varInt    = GetInteger(aObject, "IntValue");
   d_varDouble = GetDouble(aObject, "DoubleValue");
}

TJSONObject *TdoObject::ToJson()
{
   auto o = new TJSONObject();
   AddPair(o, "StringValue", d_varString);
   AddPair(o, "IntValue", d_varInt);
   AddPair(o, "DoubleValue", d_varDouble);
   return o;
}

