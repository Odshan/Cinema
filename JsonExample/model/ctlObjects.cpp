//---------------------------------------------------------------------------

#pragma hdrstop

#include "ctlObjects.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

TctlObjects::TctlObjects() :
    TctlJsonDatabase< TdoObject >("object.json")
{
}

