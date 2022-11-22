object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
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
    Top = 0
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
    end
    object Label2: TLabel
      Left = 16
      Top = 64
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
    end
    object Label4: TLabel
      Left = 16
      Top = 16
      Width = 145
      Height = 33
      AutoSize = False
      Caption = 'Cinema Info:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
end
