//---------------------------------------------------------------------------

#ifndef ReservateH
#define ReservateH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>

#include "MovieModel.h"
#include "FoodController.h"
#include <Vcl.ComCtrls.hpp>

class FoodController;
class ReservationController;

//---------------------------------------------------------------------------
class TForm3 : public TForm
{
	FoodController *d_food;
	ReservationController *d_reservation;

    MovieModel* d_model;

__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TLabel *Label1;
	TPanel *Panel3;
	TLabel *Label3;
	TPanel *Panel4;
	TPanel *Panel5;
	TLabel *Label2;
	TLabel *Label5;
	TLabel *Label6;
	TListView *FoodList;
	TListView *ListView1;
	TButton *Button1;
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ListView1SelectItem(TObject *Sender, TListItem *Item, bool Selected);
	void __fastcall ListView1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);






private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);

	void SetMovie(MovieModel *aValue);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
