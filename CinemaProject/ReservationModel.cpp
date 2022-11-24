//---------------------------------------------------------------------------

#pragma hdrstop

#include "ReservationModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


ReservationModel::ReservationModel()
{
}

void ReservationModel::FromJson(TJSONObject *aObject)
{
   d_movieName = GetString(aObject, "MovieName");
   d_seatNumber = GetInteger(aObject, "SeatNumber");
   d_pricetotal = GetInteger(aObject, "Pricetotal");
}

TJSONObject *ReservationModel::ToJson()
{
   auto o = new TJSONObject();

   AddPair(o, "MovieName", d_movieName);
   AddPair(o, "SeatNumber", d_seatNumber);
   AddPair(o, "Pricetotal", d_pricetotal);

   return o;
}