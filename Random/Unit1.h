//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <vector>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Random;
	TLabel *Label1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall RandomClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
extern DELPHI_PACKAGE int __fastcall RandomRange(const int AFrom, const int ATo);
//---------------------------------------------------------------------------
#endif
