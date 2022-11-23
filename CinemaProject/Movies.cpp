//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Home.h"
#include "Movies.h"
#include "Reservate.h"
#include "MovieController.h"
#include "MovieModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TForm2 *Form2;
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent *Owner) :
	TForm(Owner),
	d_movie(new MovieController())
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
    d_movie->Reload();

    MovieList->Items->Clear();
   for (auto item : d_movie->List())
   {
	  auto row = MovieList->Items->Add();

      row->Caption = item->Name;
	  row->SubItems->Add(String(item->Price));
	  row->SubItems->Add(String(item->Age));
	  row->SubItems->Add(String(item->StartTime));

	  row->Data = item;
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Label3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Label4Click(TObject *Sender)
{
	Hide();
	Form3->ShowModal();
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::MovieListSelectItem(TObject *Sender, TListItem *Item, bool Selected)

{
 if (Item != nullptr)
 {
<<<<<<< HEAD
	MovieObject * o = reinterpret_cast<MovieObject *>(Item->Data);
=======
	 MovieModel * o = reinterpret_cast<MovieModel *>(Item->Data);
>>>>>>> 334aeba5636c068240daacfb4d7a24c2d611e330
	Hide();
	Form3->SetMovie(o);
	Form3->ShowModal();
	Close();
 }
}
//---------------------------------------------------------------------------

