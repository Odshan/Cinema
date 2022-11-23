//---------------------------------------------------------------------------

#pragma hdrstop

#include "FoodModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

FoodModel::FoodModel()
{
}

void FoodModel::FromJson(TJSONObject *aObject)
{
   d_name = GetString(aObject, "name");
   d_price = GetString(aObject, "price");
}

TJSONObject *FoodModel::ToJson()
{
   auto o = new TJSONObject();

   AddPair(o, "name", d_name);
   AddPair(o, "price", d_price);

   return o;
}