//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MyReservation.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}

void TForm5::SetReservationCode(RawByteString *o)
{
   Label1->Caption = o;
}


//---------------------------------------------------------------------------
