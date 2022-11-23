//---------------------------------------------------------------------------

#ifndef FoodModelH
#define FoodModelH

#include "JsonObject.h"

class FoodModel : public TJsonObject
{
   String d_name;
   String d_price;

 public:
   FoodModel();

   __property String    Name   = {read = d_name, write = d_name };
   __property String    Price   = {read = d_price, write = d_price };

 protected:
 private:
   void         FromJson(TJSONObject *aObject);
   TJSONObject *ToJson();
};
//---------------------------------------------------------------------------
#endif