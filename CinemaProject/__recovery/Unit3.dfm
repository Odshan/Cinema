object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 479
  ClientWidth = 719
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    719
    479)
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = -1
    Top = 0
    Width = 720
    Height = 40
    Anchors = [akLeft, akTop, akRight, akBottom]
    Caption = 'ProjectWeek - Home'
    Color = clBackground
    ParentBackground = False
    TabOrder = 0
    ExplicitWidth = 721
    ExplicitHeight = 41
  end
  object Panel2: TPanel
    Left = 8
    Top = 47
    Width = 200
    Height = 424
    Anchors = [akLeft, akTop, akRight, akBottom]
    Color = clScrollBar
    ParentBackground = False
    TabOrder = 1
    ExplicitWidth = 201
    ExplicitHeight = 425
    object Label1: TLabel
      Left = 16
      Top = 16
      Width = 86
      Height = 24
      Caption = 'Movie 1:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object Panel3: TPanel
    Left = 496
    Top = 47
    Width = 215
    Height = 424
    Anchors = [akLeft, akTop, akRight, akBottom]
    Color = clScrollBar
    ParentBackground = False
    TabOrder = 2
    ExplicitWidth = 216
    ExplicitHeight = 425
    object Label3: TLabel
      Left = 160
      Top = 392
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
  object Panel4: TPanel
    Left = 215
    Top = 46
    Width = 275
    Height = 425
    Color = cl3DLight
    ParentBackground = False
    TabOrder = 3
  end
end
