//---------------------------------------------------------------------------

#pragma hdrstop

#include "FoodController.h"
#include "FoodModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

FoodController::FoodController() :
    TctlJsonDatabase< FoodModel >("food.json")
{
}