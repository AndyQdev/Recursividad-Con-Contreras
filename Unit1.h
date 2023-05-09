//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Numeros1;
	TMenuItem *Numeros2;
	TMenuItem *Potencia1;
	TMenuItem *MAyorMenor1;
	TMenuItem *Eliminarundigito1;
	TMenuItem *Mayor1;
	TMenuItem *Suma1;
	TGroupBox *Ejercicios;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TMenuItem *Cadenas1;
	TMenuItem *EliminarVocales1;
	TMenuItem *Cantidaddevocales1;
	TMenuItem *R1;
	TMenuItem *Cantidaddeletras1;
	TMenuItem *Invertir;
	TGroupBox *GroupBox1;
	TStringGrid *StringGrid1;
	TButton *Button1;
	TButton *Button2;
	TMenuItem *EsAscendente1;
	TMenuItem *Ascendentedescendenteoordenado1;
	TMenuItem *Esdescendente1;
	TMenuItem *OrdenarPrimosYnoPrimos1;
	TMenuItem *Menoralfinal1;
	TMenuItem *Vectores1;
	TMenuItem *Vectores2;
	TLabel *Label4;
	TLabel *LbResultado;
	TMenuItem *OrdBubblesort1;
	TMenuItem *Burbujear1;
	TMenuItem *SelectionSort1;
	TMenuItem *Selection1;
	TMenuItem *SacarMayor1;
	TMenuItem *Fibonacci1;
	TMenuItem *CargarFibonacci1;
	TMenuItem *LoadVector1001;
	TMenuItem *InvertirNumero1;
	TMenuItem *Devolverelementosinvertidos1;
	TMenuItem *Matrices1;
	TMenuItem *Matrices2;
	TMenuItem *Cargadeafuerahaciaadentro1;
	TMenuItem *LlenarF1;
	TMenuItem *CargarenL1;
	TMenuItem *ElminiarMelementos1;
	TMenuItem *CargaSeccomovex1;
	TMenuItem *CargarMitadSec1;
	TMenuItem *LlenarF1dedereaizquiier1;
	TMenuItem *Llenar2Decrecente1;
	TMenuItem *LlenarenL1;
	TMenuItem *DeletePrimernumero1;
	TMenuItem *InsetarDigito1;
	TMenuItem *LlenarDIagonal1;
	TMenuItem *CargarMatrizdiagonal1;
	TMenuItem *CargarMatrizdiagonaltotal1;
	TMenuItem *RepNveces1;
	TMenuItem *NumeroRepNveces1;
	void __fastcall Numeros2Click(TObject *Sender);
	void __fastcall Potencia1Click(TObject *Sender);
	void __fastcall MAyorMenor1Click(TObject *Sender);
	void __fastcall Eliminarundigito1Click(TObject *Sender);
	void __fastcall Mayor1Click(TObject *Sender);
	void __fastcall Suma1Click(TObject *Sender);
	void __fastcall EliminarVocales1Click(TObject *Sender);
	void __fastcall Cantidaddevocales1Click(TObject *Sender);
	void __fastcall R1Click(TObject *Sender);
	void __fastcall InvertirClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall EsAscendente1Click(TObject *Sender);
	void __fastcall EsDescendente1Click(TObject *Sender);
	void __fastcall Ascendentedescendenteoordenado1Click(TObject *Sender);
	void __fastcall OrdenarPrimosYnoPrimos1Click(TObject *Sender);
	void __fastcall Menoralfinal1Click(TObject *Sender);
	void __fastcall Vectores2Click(TObject *Sender);
	void __fastcall OrdBubblesort1Click(TObject *Sender);
	void __fastcall Burbujear1Click(TObject *Sender);
	void __fastcall SacarMayor1Click(TObject *Sender);
	void __fastcall SelectionSort1Click(TObject *Sender);
	void __fastcall Selection1Click(TObject *Sender);
	void __fastcall Fibonacci1Click(TObject *Sender);
	void __fastcall CargarFibonacci1Click(TObject *Sender);
	void __fastcall LoadVector1001Click(TObject *Sender);
	void __fastcall InvertirNumero1Click(TObject *Sender);
	void __fastcall Devolverelementosinvertidos1Click(TObject *Sender);
	void __fastcall Matrices2Click(TObject *Sender);
	void __fastcall Cargadeafuerahaciaadentro1Click(TObject *Sender);
	void __fastcall LlenarF1Click(TObject *Sender);
	void __fastcall CargarenL1Click(TObject *Sender);
	void __fastcall ElminiarMelementos1Click(TObject *Sender);
	void __fastcall CargaSeccomovex1Click(TObject *Sender);
	void __fastcall CargarMitadSec1Click(TObject *Sender);
	void __fastcall LlenarF1dedereaizquiier1Click(TObject *Sender);
	void __fastcall Llenar2Decrecente1Click(TObject *Sender);
	void __fastcall LlenarenL1Click(TObject *Sender);
	void __fastcall DeletePrimernumero1Click(TObject *Sender);
	void __fastcall InsetarDigito1Click(TObject *Sender);
	void __fastcall LlenarDIagonal1Click(TObject *Sender);
	void __fastcall CargarMatrizdiagonal1Click(TObject *Sender);
	void __fastcall CargarMatrizdiagonaltotal1Click(TObject *Sender);
	void __fastcall RepNveces1Click(TObject *Sender);
	void __fastcall NumeroRepNveces1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
