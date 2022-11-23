//---------------------------------------------------------------------------

#ifndef MovieControllerH
#define MovieControllerH

#include "ctlJsonDatabase.h"
#include "MovieModel.h"

class MovieController : public TctlJsonDatabase< MovieModel >
{
 public:
   MovieController();

 protected:
 private:
};
//---------------------------------------------------------------------------
#endif
