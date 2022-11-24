// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Reservate.h"
#include "MovieModel.h"
#include "FoodController.h"
#include "ReservationController.h"
#include "ReservationModel.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

// ---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner), d_food(new FoodController()),
	d_reservation(new ReservationController()), d_model(nullptr) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender) {
	d_food->Reload();
	FoodList->Items->Clear();
	for (auto item : d_food->List()) {
		auto Row = FoodList->Items->Add();

		Row->Caption = item->Name;
		Row->SubItems->Add(String(item->Price));
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm3::Label3Click(TObject *Sender) {
	Close();
}

// ---------------------------------------------------------------------------
void TForm3::SetMovie(MovieModel *Movie) {
	d_model = Movie;

	Label1->Caption = "Movie : " + Movie->Name + "\n" + "Description : " +
		Movie->Description + "\n" + "Age Restriction : " + Movie->Age + "\n" +
		"Duration : " + Movie->Duration;

	Label6->Caption = "Price : " + Movie->Price + "\n" + "Starting Time : " +
		Movie->StartTime;

}

void __fastcall TForm3::ListView1SelectItem(TObject *Sender, TListItem *Item,
	bool Selected)

{
	Button1->Enabled = true;
}
// ---------------------------------------------------------------------------

void __fastcall TForm3::ListView1Click(TObject *Sender) {
	if (ListView1->SelCount == 0) {
		Button1->Enabled = false;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender) {
	String s;
	for (int i = 0; i < 4; i++) {
		s += String(1 + (rand() % 9));
	}

	if (d_model != nullptr) {
		d_reservation->Reload();
		auto o = new ReservationModel();
		o->MovieName = d_model->Name;
		o->SeatNumber = ListView1->ItemIndex;
		o->PriceTotal = d_model->Price;
		o->ReservationCode = s;
		d_reservation->Add(o);

		d_reservation->SaveToDisk();
	} else {
		ShowMessage("Movie not found!");
    }
}
// ---------------------------------------------------------------------------
