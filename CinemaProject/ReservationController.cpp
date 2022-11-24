//---------------------------------------------------------------------------

#pragma hdrstop

#include "ReservationController.h"
#include "ReservationModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ReservationController::ReservationController() :
	TctlJsonDatabase< ReservationModel >("reservations.json")
{
}
