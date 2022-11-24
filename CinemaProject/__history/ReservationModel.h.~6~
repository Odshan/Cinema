//---------------------------------------------------------------------------

#ifndef ReservationModelH
#define ReservationModelH
#include "JsonObject.h"


class ReservationModel : public TJsonObject
{
   String d_movieName;
   int d_seatNumber;
   int d_priceTotal;
   String d_reservationCode;

 public:
   ReservationModel();

   __property String	MovieName		= {read = d_movieName, write = d_movieName };
   __property int		SeatNumber		= {read = d_seatNumber, write = d_seatNumber };
   __property int 		PriceTotal		= {read = d_priceTotal, write = d_priceTotal };
   __property String 	ReservationCode	= {read = d_reservationCode, write = d_reservationCode };

 protected:
 private:
   void         FromJson(TJSONObject *aObject);
   TJSONObject *ToJson();
};
//---------------------------------------------------------------------------
#endif
