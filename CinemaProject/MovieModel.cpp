//---------------------------------------------------------------------------

#pragma hdrstop

#include "MovieModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


MovieModel::MovieModel()
{
}

void MovieModel::FromJson(TJSONObject *aObject)
{
   d_name = GetString(aObject, "name");
   d_description = GetString(aObject, "description");
   d_age = GetString(aObject, "age");
   d_duration = GetString(aObject, "duration");
   d_price = GetString(aObject, "price");
   d_starttime = GetString(aObject, "starttime");
}

TJSONObject *MovieModel::ToJson()
{
   auto o = new TJSONObject();

   AddPair(o, "name", d_name);
   AddPair(o, "description", d_description);
   AddPair(o, "age", d_age);
   AddPair(o, "duration", d_duration);
   AddPair(o, "price", d_price);
   AddPair(o, "starttime", d_starttime);

   return o;
}
