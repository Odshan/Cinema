//---------------------------------------------------------------------------

#pragma hdrstop

#include "MovieController.h"
#include "MovieModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

MovieController::MovieController() :
    TctlJsonDatabase< MovieModel >("movies.json")
{
}

