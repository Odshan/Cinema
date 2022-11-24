//---------------------------------------------------------------------------

#ifndef ReservationModelH
#define ReservationModelH
#include "JsonObject.h"


class ReservationModel : public TJsonObject
{
   String d_movieName;
   int d_seatNumber;
   int d_pricetotal;

 public:
   ReservationModel();

   __property String	MovieName		= {read = d_movieName, write = d_movieName };
   __property int		SeatNumber		= {read = d_seatNumber, write = d_seatNumber };
   __property int 		PriceTotal		= {read = d_pricetotal, write = d_pricetotal };

 protected:
 private:
   void         FromJson(TJSONObject *aObject);
   TJSONObject *ToJson();
};
//---------------------------------------------------------------------------
#endif
