//---------------------------------------------------------------------------

#ifndef ReservationControllerH
#define ReservationControllerH

#include "ctlJsonDatabase.h"
#include "ReservationModel.h"

class ReservationController : public TctlJsonDatabase< ReservationModel >
{
 public:
   ReservationController();

 protected:
 private:
};
//---------------------------------------------------------------------------
#endif
