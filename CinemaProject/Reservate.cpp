//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Reservate.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
	//TODO Get clicked Movie in Form 2 (Movie)
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Label3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

