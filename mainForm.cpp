//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Calclator.h"

#include "mainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

	int value1, value2;

	value1 = StrToInt(Edit1->Text);
	value2 = StrToInt(Edit2->Text);

	Calclator aCalc;
	
	Edit3->Text = aCalc.plus(value1, value2);
}
//---------------------------------------------------------------------------
