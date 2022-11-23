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
//	int x = 0;
//	std::string s = std::to_string(x);
//	Label5->Caption = "Total Cost : " + s;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Label3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void TForm3::SetMovie(MovieModel *Movie)
{
	Label1->Caption =  	"Movie : " + Movie->Name + "\n" +
						"Description : " + Movie->Description + "\n"  +
						"Age Restriction : " + Movie->Age + "\n" +
						"Duration : " + Movie->Duration;

	Label6->Caption =	"Price : " + Movie->Price + "\n" +
						"Starting Time : " + Movie->StartTime;
}
