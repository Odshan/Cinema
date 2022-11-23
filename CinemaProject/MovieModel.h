//---------------------------------------------------------------------------

#ifndef MovieModelH
#define MovieModelH

#include "JsonObject.h"


class MovieModel : public TJsonObject
{
   String d_name;
   String d_description;
   String d_age;
   String d_duration;
   String d_price;
   String d_starttime;

 public:
   MovieModel();

   __property String	Name		= {read = d_name, write = d_name };
   __property String	Description	= {read = d_description, write = d_description };
   __property String 	Age			= {read = d_age, write = d_age };
   __property String    Duration    = {read = d_duration, write = d_duration };
   __property String    Price       = {read = d_price, write = d_price };
   __property String    StartTime   = {read = d_starttime, write = d_starttime };

 protected:
 private:
   void         FromJson(TJSONObject *aObject);
   TJSONObject *ToJson();
};
//---------------------------------------------------------------------------
#endif
