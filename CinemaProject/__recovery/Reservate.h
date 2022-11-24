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

//---------------------------------------------------------------------------
class TForm3 : public TForm
{
	FoodController *d_food;

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
	TPanel *Panel36;
	TLabel *Label6;
	TListView *FoodList;
	TListView *ListView1;
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);

	void SetMovie(MovieModel *aValue);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
