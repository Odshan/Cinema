//---------------------------------------------------------------------------

#ifndef ReservationCodeH
#define ReservationCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>

//---------------------------------------------------------------------------
class TForm4 : public TForm
{
	__published:	// IDE-managed Components
	TPanel *Panel1;
	TEdit *ReservationCode;
	TPanel *Panel3;
	TLabel *Label4;
	TLabel *Label1;
	void __fastcall Label1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
