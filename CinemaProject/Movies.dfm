object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 480
  ClientWidth = 720
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
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
    Caption = 'ProjectWeek - Movies'
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
    ParentBackground = False
    TabOrder = 1
    object Label3: TLabel
      Left = 616
      Top = 392
      Width = 70
      Height = 24
      Caption = 'Return'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label3Click
    end
    object MovieList: TListView
      Left = 8
      Top = 8
      Width = 689
      Height = 378
      Columns = <
        item
          Caption = 'Movie'
          Width = 335
        end
        item
          Caption = 'Price'
          Width = 100
        end
        item
          Caption = 'Age'
          Width = 100
        end
        item
          Caption = 'Start Time'
          Width = 150
        end>
      ReadOnly = True
      RowSelect = True
      TabOrder = 0
      ViewStyle = vsReport
    end
  end
end
