//---------------------------------------------------------------------------

#pragma hdrstop

#include "ReservationModel.h"
#include "ReservationController.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ReservationController::ReservationController() :
	TctlJsonDatabase< ReservationModel >("Reservations.json")
{
}
