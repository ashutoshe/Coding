VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   7425
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   6720
   LinkTopic       =   "Form1"
   ScaleHeight     =   7425
   ScaleWidth      =   6720
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text5 
      Height          =   855
      Left            =   8760
      TabIndex        =   10
      Text            =   "Text5"
      Top             =   5880
      Visible         =   0   'False
      Width           =   1095
   End
   Begin VB.TextBox Text4 
      Height          =   615
      Left            =   8760
      TabIndex        =   9
      Text            =   "Text4"
      Top             =   3840
      Visible         =   0   'False
      Width           =   1095
   End
   Begin VB.TextBox Text3 
      Height          =   735
      Left            =   8760
      TabIndex        =   8
      Text            =   "Text3"
      Top             =   2040
      Visible         =   0   'False
      Width           =   1095
   End
   Begin VB.CommandButton Command4 
      Caption         =   "answer"
      Height          =   615
      Left            =   4440
      TabIndex        =   7
      Top             =   6600
      Visible         =   0   'False
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Height          =   855
      Left            =   4440
      TabIndex        =   6
      Top             =   5160
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   615
      Left            =   4440
      TabIndex        =   5
      Top             =   3720
      Visible         =   0   'False
      Width           =   1815
   End
   Begin VB.CommandButton Command3 
      Caption         =   "answer"
      Height          =   855
      Left            =   840
      TabIndex        =   4
      Top             =   6480
      Visible         =   0   'False
      Width           =   1935
   End
   Begin VB.CommandButton Command2 
      Caption         =   "rectangle"
      Height          =   855
      Left            =   4080
      TabIndex        =   1
      Top             =   1800
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "circle"
      Height          =   735
      Left            =   720
      TabIndex        =   0
      Top             =   1920
      Width           =   1815
   End
   Begin VB.Label Label5 
      Caption         =   "Label5"
      Height          =   855
      Left            =   6960
      TabIndex        =   13
      Top             =   6360
      Visible         =   0   'False
      Width           =   1095
   End
   Begin VB.Label Label4 
      Caption         =   "Label4"
      Height          =   615
      Left            =   6960
      TabIndex        =   12
      Top             =   4560
      Visible         =   0   'False
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Label3"
      Height          =   495
      Left            =   6960
      TabIndex        =   11
      Top             =   2640
      Visible         =   0   'False
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "answer"
      Height          =   735
      Left            =   840
      TabIndex        =   3
      Top             =   5040
      Width           =   1935
   End
   Begin VB.Label Label1 
      Caption         =   "radius"
      Height          =   855
      Left            =   840
      TabIndex        =   2
      Top             =   3720
      Width           =   1815
   End
   Begin VB.Shape Shape2 
      Height          =   855
      Left            =   4680
      Shape           =   3  'Circle
      Top             =   480
      Visible         =   0   'False
      Width           =   1215
   End
   Begin VB.Shape Shape1 
      Height          =   855
      Left            =   480
      Top             =   480
      Visible         =   0   'False
      Width           =   2055
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub command1_click()
Shape2.Visible = True
Label1.Visible = True
Label2.Visible = True
Text1.Visible = True
Text2.Visible = True
Command3.Visible = True

Shape1.Visible = False
Label3.Visible = False
Label4.Visible = False
Label5.Visible = False

Text3.Visible = False
Text4.Visible = False
Text5.Visible = False
Command4.Visible = False
End Sub

Private Sub command2_click()
Shape2.Visible = False
Label1.Visible = False
Label2.Visible = False
Text1.Visible = False
Text2.Visible = False
Command3.Visible = False

Shape1.Visible = True
Label3.Visible = True
Label4.Visible = True
Label5.Visible = True

Text3.Visible = True
Text4.Visible = True
Text5.Visible = True
Command4.Visible = True
End Sub


Private Sub command3_click()
Text2.Text = 3.14 * (Text1.Text * Text1.Text)
End Sub


Private Sub command4_click()
Text5.Text = Text3.Text * Text3.Text * Text4.Text
End Sub


