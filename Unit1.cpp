//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
byte Mayor (Cardinal x)
{
	byte s;
	if ( x < 10 ) //Caso base cuando n = 1
	{
		s = x;
	} else
	{
		s = Mayor( x / 10 );
		if (s < x % 10)
		{
            s = x % 10;
		}
	}
	return s;
}

//---------------------------------------------------------------------------
byte Suma (Cardinal x)
{
	byte s;
	if ( x < 10 ) //Caso base cuando el nro de digitos(n) es = 1
	{
		s = x;
	}else         //Caso general
	{
		s = Suma( x / 10 ); // div = "/"
		s = s + ( x % 10 ); // mod = "%"
	}

    return s;
}


//---------------------------------------------------------------------------
void ElimDigImp(Cardinal &x)
{
	if (x < 10)//Caso base cuando el nro de digitos = 1
	{
		if ( (x % 2) == 1 )
			x = 0;
	}else
	{
		byte d = x % 10;
		x = x / 10;
		ElimDigImp(x);
			if ( (d % 2) == 0 )
			{
				x = (x * 10) + d;
			}
	}
};

//---------------------------------------------------------------------------
void __fastcall TForm1::Numeros2Click(TObject *Sender)
{
	Cardinal z = StrToInt(Edit1->Text);
	ElimDigImp(z);
	Edit2->Text = z;
}
//---------------------------------------------------------------------------
float PotenciaNum(float x, byte n)
{
	if (( n == 0 )&&( x == 0 ))//Precondiciones x y n no pueden ser 0
	{
		throw new Exception("Error Indeterminacion");
	} else
	{
		if ( n==0 )//Caso base
			return 1;

		else //Caso General
			return PotenciaNum( x, n-1 ) * x;

	}
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Potencia1Click(TObject *Sender)
{
	Edit3->Text = PotenciaNum(StrToFloat(Edit1->Text), StrToInt(Edit2->Text));
}
//---------------------------------------------------------------------------
void MayorMenor ( Cardinal x, byte &m, byte &M)
{
	if ( x<10 )
	{
		m = x;
		M = x;
	} else
	{
		byte p = x % 10;
        x = x / 10;
		MayorMenor(x, m, M);
		if (p < m)
		{
            m = p;
		}
		if (p > M)
		{
            M = p;
		}
	}
}

//---------------------------------------------------------------------------

void __fastcall TForm1::MAyorMenor1Click(TObject *Sender)
{
	byte Mayor, Menor;
	MayorMenor(StrToInt(Edit1->Text), Menor, Mayor);
	Edit2->Text = Menor;
    Edit3->Text = Mayor;
}
//---------------------------------------------------------------------------
void EliminDig(Cardinal &x, byte i)
{
	if ( x < 10 ){
		if(x == i)
			x = 0;
	} else {
		byte d = x % 10;
		x = x / 10;
		EliminDig(x, i);
		if (d!=i)
			x = x*10 + d;
	}
};

//---------------------------------------------------------------------------


void __fastcall TForm1::Eliminarundigito1Click(TObject *Sender)
{
	Cardinal x = StrToInt(Edit1->Text);
	EliminDig( x, StrToInt(Edit2->Text));
    Edit3->Text = x;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Mayor1Click(TObject *Sender)
{
	Edit2->Text = Mayor(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Suma1Click(TObject *Sender)
{
	Edit2->Text = Suma(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------


