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
void EliminVocal(AnsiString &s){

}


//---------------------------------------------------------------------------


void __fastcall TForm1::EliminarVocales1Click(TObject *Sender)
{
	AnsiString s = Edit1->Text;
	EliminVocal(s);
	Edit2->Text = s;
}
//---------------------------------------------------------------------------
bool Isvocal(char a){
	AnsiString s = "AEIOUaeiou�����";
	return s.Pos(a)>0;
};
//---------------------------------------------------------------------------
byte CantVoc(AnsiString s)
{
	byte c = 0;
	if (s == ""){
		c = 0;
	} else {
		char a = s[1];
		s.Delete(1,1);
		c = CantVoc(s);
		if (Isvocal(a)){
			c++;
		};
	}
	return c;
};

//---------------------------------------------------------------------------

void __fastcall TForm1::Cantidaddevocales1Click(TObject *Sender)
{
    Edit2->Text = CantVoc(Edit1->Text);
}
//---------------------------------------------------------------------------
AnsiString NextString(AnsiString s){
	AnsiString Cad;
	char space = ' ';
	if ((s == "")||(s[1]== space)){ //Caso base
		Cad = "";
	} else { //Caso general
		AnsiString a = s[1];
		s.Delete(1,1);
		if (a  != space)
			Cad = a + NextString(s);
	}
	return Cad;
};
//---------------------------------------------------------------------------
void __fastcall TForm1::R1Click(TObject *Sender)
{
	Edit2->Text = NextString(Edit1->Text);
}
//---------------------------------------------------------------------------

AnsiString Inverso1(AnsiString x){ //Menos el primero
	AnsiString Cad;
	byte n = x.Length();
	if(n==0){
		return "";
	}else {
	   char z = x[1];
	   x.Delete(1,1);
	   return  Inverso1(x) + z ;
	}
};
//---------------------------------------------------------------------------
AnsiString Inverso2(AnsiString x){ //Menos el Ultimo
	AnsiString Cad;
	byte n = x.Length();
	if(n==0){
		return "";
	}else {
	   char z = x[n];
	   x.Delete(n,1);
	   return AnsiString(z) + Inverso2(x);
	}
};
//---------------------------------------------------------------------------
AnsiString Inverso3(AnsiString x){ //Menos los 2 primeros
	AnsiString Cad;
	byte n = x.Length();
	if(n<2){
        return x;
	}else {
	   AnsiString z = x.SubString(1,2);
	   x.Delete(1,2);
	   return Inverso3(x) + z[2]+ z[1];
	}
};
//---------------------------------------------------------------------------
AnsiString Inverso4(AnsiString x){ //Menos los 2 ultimos
	AnsiString Cad;
	byte n = x.Length();
	if(n<2){
		return x;
	}else {
	   AnsiString z = x.SubString(1,2);
	   x.Delete(1,2);
	   return AnsiString(z[2])+ AnsiString(z[1]) + Inverso4(x);
	}
};
//---------------------------------------------------------------------------
AnsiString Inverso5(AnsiString x){ //Menos los 2 ultimos
	AnsiString Cad;
	byte n = x.Length();
	if(n<2){
		return x;
	}else {
	   char z = x[1], y = x[n];
	   x.Delete(n, 1);
	   x.Delete(1,1);
	   return  AnsiString(y) + Inverso5(x) + AnsiString(z);
	}
};
void __fastcall TForm1::InvertirClick(TObject *Sender)
{
	Edit1->Text= Inverso5(Edit1->Text);
}
//---------------------------------------------------------------------------

