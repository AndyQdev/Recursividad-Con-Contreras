object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 279
  ClientWidth = 864
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Ejercicios: TGroupBox
    Left = 64
    Top = 24
    Width = 289
    Height = 209
    Caption = 'Ejercicios'
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 48
      Width = 85
      Height = 16
      Caption = 'Primer Valor:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 3
      Top = 103
      Width = 99
      Height = 16
      Caption = 'Segundo Valor:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 16
      Top = 160
      Width = 70
      Height = 16
      Caption = 'Resultado:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 108
      Top = 42
      Width = 161
      Height = 27
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 108
      Top = 97
      Width = 161
      Height = 27
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object Edit3: TEdit
      Left = 108
      Top = 154
      Width = 161
      Height = 27
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
  end
  object GroupBox1: TGroupBox
    Left = 384
    Top = 24
    Width = 441
    Height = 209
    Caption = 'Vectores'
    TabOrder = 1
    object StringGrid1: TStringGrid
      Left = 40
      Top = 42
      Width = 177
      Height = 55
      ColCount = 3
      DefaultColWidth = 40
      FixedCols = 0
      RowCount = 1
      FixedRows = 0
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
      ParentFont = False
      TabOrder = 0
    end
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
    object Numeros1: TMenuItem
      Caption = 'Numeros'
      object Numeros2: TMenuItem
        Caption = 'Eliminar digitos Impares'
        OnClick = Numeros2Click
      end
      object Potencia1: TMenuItem
        Caption = 'Potencia'
        OnClick = Potencia1Click
      end
      object MAyorMenor1: TMenuItem
        Caption = 'MAyorMenor'
        OnClick = MAyorMenor1Click
      end
      object Eliminarundigito1: TMenuItem
        Caption = 'Eliminar un digito'
        OnClick = Eliminarundigito1Click
      end
      object Mayor1: TMenuItem
        Caption = 'Mayor'
        OnClick = Mayor1Click
      end
      object Suma1: TMenuItem
        Caption = 'Suma'
        OnClick = Suma1Click
      end
      object R1: TMenuItem
        Caption = 'Next Palabra'
        OnClick = R1Click
      end
    end
    object Cadenas1: TMenuItem
      Caption = 'Cadenas'
      object EliminarVocales1: TMenuItem
        Caption = 'Eliminar Vocales'
        OnClick = EliminarVocales1Click
      end
      object Cantidaddevocales1: TMenuItem
        Caption = 'Cantidad de vocales'
        OnClick = Cantidaddevocales1Click
      end
      object Cantidaddeletras1: TMenuItem
        Caption = 'Cantidad de letras'
      end
      object Invertir: TMenuItem
        Caption = 'Invertir Cadena'
        OnClick = InvertirClick
      end
    end
  end
end
