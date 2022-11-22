//---------------------------------------------------------------------------
#ifndef ctlObjectsH
#define ctlObjectsH
//---------------------------------------------------------------------------
#include "base/ctlJsonDatabase.h"
#include "model/doObject.h"

//---------------------------------------------------------------------------
class TctlObjects : public TctlJsonDatabase< TdoObject >
{
 public:
   TctlObjects();

 protected:
 private:
};
//---------------------------------------------------------------------------
#endif

