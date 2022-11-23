object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Reservations'
  ClientHeight = 480
  ClientWidth = 720
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    720
    480)
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = -1
    Top = -1
    Width = 721
    Height = 41
    Anchors = [akLeft, akTop, akRight, akBottom]
    Caption = 'ProjectWeek - Reservation'
    Color = clBackground
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 0
  end
  object Panel3: TPanel
    Left = 8
    Top = 47
    Width = 704
    Height = 425
    Anchors = [akLeft, akTop, akRight, akBottom]
    Color = cl3DLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clPurple
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 1
    object Label3: TLabel
      Left = 648
      Top = 390
      Width = 38
      Height = 24
      Caption = 'Exit'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 248
      Top = 144
      Width = 217
      Height = 33
      AutoSize = False
      Caption = 'My Reservation Code'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 224
      Top = 175
      Width = 273
      Height = 42
      BorderStyle = bsNone
      Color = cl3DDkShadow
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -33
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      Text = 'Edit1'
    end
  end
end
