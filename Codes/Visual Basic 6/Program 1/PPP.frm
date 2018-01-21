VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   6990
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   8835
   LinkTopic       =   "Form1"
   ScaleHeight     =   6990
   ScaleWidth      =   8835
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   495
      Index           =   4
      Left            =   6720
      TabIndex        =   13
      Top             =   3720
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Index           =   3
      Left            =   6720
      TabIndex        =   12
      Top             =   4560
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Index           =   2
      Left            =   2280
      TabIndex        =   11
      Top             =   4440
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Index           =   1
      Left            =   2280
      TabIndex        =   10
      Top             =   5160
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Index           =   0
      Left            =   2280
      TabIndex        =   9
      Top             =   3720
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Area Of a Circle"
      Height          =   435
      Left            =   5760
      TabIndex        =   8
      Top             =   6000
      Visible         =   0   'False
      Width           =   1575
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Area Of a Rectangle"
      Height          =   375
      Left            =   1560
      TabIndex        =   7
      Top             =   6120
      Visible         =   0   'False
      Width           =   1695
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Circle"
      Height          =   495
      Left            =   5280
      TabIndex        =   1
      Top             =   2760
      Width           =   2775
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Rectangle"
      Height          =   495
      Left            =   1080
      TabIndex        =   0
      Top             =   2760
      Width           =   2895
   End
   Begin VB.Label Label6 
      Caption         =   "Area"
      Height          =   495
      Left            =   4920
      TabIndex        =   6
      Top             =   4560
      Visible         =   0   'False
      Width           =   1455
   End
   Begin VB.Label Label4 
      Caption         =   "Radius"
      Height          =   495
      Left            =   4920
      TabIndex        =   5
      Top             =   3720
      Visible         =   0   'False
      Width           =   1455
   End
   Begin VB.Label Label3 
      Caption         =   "Area"
      Height          =   375
      Left            =   360
      TabIndex        =   4
      Top             =   5160
      Visible         =   0   'False
      Width           =   1455
   End
   Begin VB.Label Label2 
      Caption         =   "Breadth"
      Height          =   255
      Left            =   360
      TabIndex        =   3
      Top             =   4560
      Visible         =   0   'False
      Width           =   1455
   End
   Begin VB.Label Label1 
      Caption         =   "Length"
      Height          =   375
      Left            =   360
      TabIndex        =   2
      Top             =   3720
      Visible         =   0   'False
      Width           =   1455
   End
   Begin VB.Shape Shape2 
      Height          =   2055
      Left            =   5760
      Shape           =   3  'Circle
      Top             =   360
      Visible         =   0   'False
      Width           =   1815
   End
   Begin VB.Shape Shape1 
      Height          =   1575
      Left            =   1080
      Top             =   720
      Visible         =   0   'False
      Width           =   3255
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Shape1.Visible = True
Shape2.Visible = False
Label1.Visible = True
Label2.Visible = True
Label3.Visible = True
Label4.Visible = False
Label6.Visible = False
Text1(0).Text = ""
Text1(1).Text = ""
Text1(2).Text = ""
Text1(3).Text = ""
Text1(4).Text = ""
Text1(0).Visible = True
Text1(1).Visible = True
Text1(2).Visible = True
Text1(3).Visible = False
Text1(4).Visible = False
Command3.Visible = True
Command4.Visible = False





End Sub

Private Sub Command2_Click()
Shape1.Visible = False
Shape2.Visible = True
Label1.Visible = False
Label2.Visible = False
Label3.Visible = False
Label4.Visible = True
Label6.Visible = True
Text1(0).Text = ""
Text1(1).Text = ""
Text1(2).Text = ""
Text1(3).Text = ""
Text1(4).Text = ""
Text1(0).Visible = False
Text1(1).Visible = False
Text1(2).Visible = False
Text1(3).Visible = True
Text1(4).Visible = True
Command3.Visible = False
Command4.Visible = True
End Sub

Private Sub Command3_Click()
Text1(1).Text = (Text1(0).Text) * (Text1(2).Text)
End Sub

Private Sub Command4_Click()
Text1(3).Text = 3.14 * (Text1(4).Text) * (Text1(4).Text)
End Sub

