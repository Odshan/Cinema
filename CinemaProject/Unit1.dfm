object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Home'
  ClientHeight = 480
  ClientWidth = 720
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBtnHighlight
  Font.Height = -20
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  OnCreate = FormCreate
  DesignSize = (
    720
    480)
  PixelsPerInch = 96
  TextHeight = 24
  object Panel1: TPanel
    Left = -1
    Top = -1
    Width = 721
    Height = 41
    Anchors = [akLeft, akTop, akRight, akBottom]
    Caption = 'ProjectWeek - Home'
    Color = clBackground
    ParentBackground = False
    TabOrder = 0
  end
  object Panel2: TPanel
    Left = 8
    Top = 47
    Width = 209
    Height = 425
    Anchors = [akLeft, akTop, akRight, akBottom]
    Color = cl3DLight
    ParentBackground = False
    TabOrder = 1
    object Label1: TLabel
      Left = 16
      Top = 16
      Width = 70
      Height = 24
      Caption = 'Movies'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label1Click
    end
    object Label2: TLabel
      Left = 16
      Top = 46
      Width = 167
      Height = 24
      Caption = 'My Reservations'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object Panel3: TPanel
    Left = 223
    Top = 47
    Width = 489
    Height = 425
    Anchors = [akLeft, akTop, akRight, akBottom]
    Color = cl3DLight
    ParentBackground = False
    TabOrder = 2
    object Label3: TLabel
      Left = 432
      Top = 384
      Width = 38
      Height = 24
      Caption = 'Exit'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label3Click
    end
    object Label4: TLabel
      Left = 16
      Top = 16
      Width = 457
      Height = 362
      AutoSize = False
      Caption = '{ Insert Cinema Info}'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
end
