//---------------------------------------------------------------------------

#ifndef FoodControllerH
#define FoodControllerH

#include "ctlJsonDatabase.h"
#include "FoodModel.h"

class FoodController : public TctlJsonDatabase< FoodModel >
{
 public:
   FoodController();

 protected:
 private:
};
//---------------------------------------------------------------------------
#endif
