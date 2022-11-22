//---------------------------------------------------------------------------

#ifndef frmMainUnitH
#define frmMainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------

class TctlObjects;

class TfrmMain : public TForm
{
   TctlObjects *d_ctlObjects;

 __published:   // IDE-managed Components
   TButton *  cmdSave;
   TButton *  cmdLoad;
   TPanel *   Panel1;
	TListView *lvItems;
   TMemo *    Memo1;
   TSplitter *Splitter1;
	TEdit *edtStringValue;
	TEdit *edtIntegerValue;
	TEdit *edtDoubleValue;
   TButton *  cmdAdd;
	TButton *Button1;
	TLabel *lblString;
	TLabel *lblInteger;
	TLabel *lblDouble;
   void __fastcall cmdLoadClick(TObject *Sender);
   void __fastcall cmdSaveClick(TObject *Sender);
	void __fastcall cmdAddClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);

 private:   // User declarations
 public:    // User declarations
   __fastcall TfrmMain(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif

