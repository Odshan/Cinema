//---------------------------------------------------------------------------
#ifndef doObjectH
#define doObjectH
//---------------------------------------------------------------------------
#include "base/JsonObject.h"
//---------------------------------------------------------------------------
class TdoObject : public TJsonObject
{
   int    d_varInt;
   String d_varString;
   double d_varDouble;

 public:
   TdoObject();

   __property int    VarInt    = {read = d_varInt, write = d_varInt};
   __property String VarString = {read = d_varString, write = d_varString};
   __property double VarDouble = {read = d_varDouble, write = d_varDouble};

 protected:
 private:
   void         FromJson(TJSONObject *aObject);
   TJSONObject *ToJson();
};
//---------------------------------------------------------------------------
#endif

