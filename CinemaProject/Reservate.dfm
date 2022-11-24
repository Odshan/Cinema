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
  OnCreate = FormCreate
  DesignSize = (
    719
    479)
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = -9
    Top = 0
    Width = 720
    Height = 40
    Anchors = [akLeft, akTop, akRight, akBottom]
    Caption = 'ProjectWeek - Reservate'
    Color = clBackground
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 0
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
    object Label1: TLabel
      Left = 8
      Top = 13
      Width = 156
      Height = 19
      Caption = '{InsertMovieData}'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
    object Label6: TLabel
      Left = 8
      Top = 352
      Width = 156
      Height = 19
      Caption = '{InsertMovieData}'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
    end
  end
  object Panel3: TPanel
    Left = 496
    Top = 46
    Width = 215
    Height = 424
    Anchors = [akLeft, akTop, akRight, akBottom]
    Color = clScrollBar
    ParentBackground = False
    TabOrder = 2
    object Label3: TLabel
      Left = 136
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
    object Label5: TLabel
      Left = 47
      Top = 274
      Width = 122
      Height = 16
      AutoSize = False
      Caption = '{InsertTotalCost}'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Panel36: TPanel
      Left = 16
      Top = 312
      Width = 185
      Height = 41
      Caption = 'Book Now'
      Color = clScrollBar
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNone
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
    end
    object FoodList: TListView
      Left = 8
      Top = 19
      Width = 201
      Height = 249
      Color = clScrollBar
      Columns = <
        item
          Caption = 'name'
          Width = 100
        end
        item
          Caption = 'Price'
          Width = 40
        end>
      ReadOnly = True
      RowSelect = True
      TabOrder = 1
      ViewStyle = vsReport
    end
  end
  object Panel4: TPanel
    Left = 214
    Top = 46
    Width = 275
    Height = 425
    Color = cl3DLight
    ParentBackground = False
    TabOrder = 3
    object Label2: TLabel
      Left = 56
      Top = 23
      Width = 169
      Height = 33
      AutoSize = False
      Caption = 'Available Seats:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBackground
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Panel5: TPanel
      Left = 40
      Top = 368
      Width = 201
      Height = 41
      Caption = 'Scherm'
      Color = clScrollBar
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentBackground = False
      ParentFont = False
      TabOrder = 0
    end
  end
end
