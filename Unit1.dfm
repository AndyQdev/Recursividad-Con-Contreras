object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 265
  ClientWidth = 631
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
  object Edit1: TEdit
    Left = 200
    Top = 48
    Width = 161
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 200
    Top = 104
    Width = 161
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 80
    Top = 107
    Width = 75
    Height = 25
    Caption = 'Mayor'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 80
    Top = 51
    Width = 75
    Height = 25
    Caption = 'Suma'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Edit3: TEdit
    Left = 200
    Top = 168
    Width = 161
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
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
    end
  end
end
