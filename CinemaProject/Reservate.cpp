//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Reservate.h"
#include "MovieModel.h"
#include "FoodController.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner),
	d_food(new FoodController())
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
	d_food->Reload();
	FoodList->Items->Clear();
	for (auto item : d_food->List()){
		auto Row = FoodList->Items->Add();

		Row->Caption = item->Name;
		Row->SubItems->Add(String(item->Price));
	}
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




void __fastcall TForm3::ListView1SelectItem(TObject *Sender, TListItem *Item, bool Selected)

{
    Button1->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::ListView1Click(TObject *Sender)
{
	if (ListView1->SelCount == 0) {
	Button1->Enabled = false;
	}
}
//---------------------------------------------------------------------------

