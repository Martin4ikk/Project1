//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 int secretNumber;
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    srand(time(0));
	secretNumber = rand() % 100 + 1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
     int guess = StrToInt(Edit1->Text);
	if (guess > secretNumber) {
		Label1->Caption = "������� ������!";
    } else if (guess < secretNumber) {
		Label1->Caption = "������� ����!";
    } else {
		Label1->Caption = "³���! �� ������� �����!";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    secretNumber = rand() % 100 + 1;
    Label1->Caption = "���� ����� ��������!";
	Edit1->Text = "";
}
//---------------------------------------------------------------------------
