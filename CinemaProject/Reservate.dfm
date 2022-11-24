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
      Top = 273
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
      TabOrder = 0
      ViewStyle = vsReport
    end
    object Button1: TButton
      Left = 16
      Top = 324
      Width = 185
      Height = 41
      Caption = 'Book Now'
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
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
      Height = 31
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
    object ListView1: TListView
      Left = 25
      Top = 62
      Width = 226
      Height = 291
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Color = cl3DLight
      Columns = <
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end>
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Tahoma'
      Font.Style = []
      Items.ItemData = {
        05720300001E00000000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000
        0001310000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000000001320000
        000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000000001330000000000FFFF
        FFFFFFFFFFFF00000000FFFFFFFF0000000001340000000000FFFFFFFFFFFFFF
        FF00000000FFFFFFFF0000000001350000000000FFFFFFFFFFFFFFFF00000000
        FFFFFFFF0000000001360000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF00
        00000001370000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000000138
        0000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000000001390000000000
        FFFFFFFFFFFFFFFF00000000FFFFFFFF00000000023100300000000000FFFFFF
        FFFFFFFFFF00000000FFFFFFFF00000000023100310000000000FFFFFFFFFFFF
        FFFF00000000FFFFFFFF00000000023100320000000000FFFFFFFFFFFFFFFF00
        000000FFFFFFFF00000000023100330000000000FFFFFFFFFFFFFFFF00000000
        FFFFFFFF00000000023100340000000000FFFFFFFFFFFFFFFF00000000FFFFFF
        FF00000000023100350000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000
        0000023100360000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000000002
        3100370000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000000002310038
        0000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF0000000002310039000000
        0000FFFFFFFFFFFFFFFF00000000FFFFFFFF00000000023200300000000000FF
        FFFFFFFFFFFFFF00000000FFFFFFFF00000000023200310000000000FFFFFFFF
        FFFFFFFF00000000FFFFFFFF00000000023200320000000000FFFFFFFFFFFFFF
        FF00000000FFFFFFFF00000000023200330000000000FFFFFFFFFFFFFFFF0000
        0000FFFFFFFF00000000023200340000000000FFFFFFFFFFFFFFFF00000000FF
        FFFFFF00000000023200350000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF
        00000000023200360000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000
        00023200370000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000000232
        00380000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000000232003900
        00000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000000233003000}
      ParentFont = False
      TabOrder = 1
      OnClick = ListView1Click
      OnSelectItem = ListView1SelectItem
    end
  end
end
