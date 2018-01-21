VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "Form3"
   ClientHeight    =   3015
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   4560
   LinkTopic       =   "Form3"
   ScaleHeight     =   10935
   ScaleWidth      =   20250
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text4 
      Height          =   855
      Left            =   12000
      TabIndex        =   17
      Top             =   1920
      Width           =   2775
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Back"
      Height          =   2055
      Left            =   8400
      TabIndex        =   15
      Top             =   5760
      Width           =   4575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Calculate"
      Height          =   2055
      Left            =   1800
      TabIndex        =   14
      Top             =   5760
      Width           =   4815
   End
   Begin VB.TextBox Text8 
      Height          =   735
      Left            =   12240
      TabIndex        =   13
      Top             =   4440
      Width           =   1335
   End
   Begin VB.TextBox Text7 
      Height          =   735
      Left            =   8280
      TabIndex        =   12
      Top             =   4440
      Width           =   1455
   End
   Begin VB.TextBox Text6 
      Height          =   735
      Left            =   4800
      TabIndex        =   11
      Top             =   4440
      Width           =   1335
   End
   Begin VB.TextBox Text5 
      Height          =   735
      Left            =   1200
      TabIndex        =   10
      Top             =   4440
      Width           =   1215
   End
   Begin VB.TextBox Text3 
      Height          =   855
      Left            =   8160
      TabIndex        =   5
      Top             =   1920
      Width           =   2775
   End
   Begin VB.TextBox Text2 
      Height          =   855
      Left            =   4320
      TabIndex        =   4
      Top             =   1920
      Width           =   2775
   End
   Begin VB.TextBox Text1 
      Height          =   855
      Left            =   720
      TabIndex        =   3
      Top             =   1920
      Width           =   2535
   End
   Begin VB.Label Label8 
      Caption         =   "Weight after loss of Volatile Matter"
      Height          =   1215
      Left            =   8040
      TabIndex        =   16
      Top             =   480
      Width           =   3015
   End
   Begin VB.Label Label7 
      Caption         =   "Percent Fixed Carbon"
      Height          =   975
      Left            =   11880
      TabIndex        =   9
      Top             =   3240
      Width           =   2655
   End
   Begin VB.Label Label6 
      Caption         =   "Percent Ash"
      Height          =   975
      Left            =   8040
      TabIndex        =   8
      Top             =   3240
      Width           =   2895
   End
   Begin VB.Label Label5 
      Caption         =   "Percent Volatile Matter"
      Height          =   975
      Left            =   4560
      TabIndex        =   7
      Top             =   3240
      Width           =   2535
   End
   Begin VB.Label Label4 
      Caption         =   "Percent Moisture"
      Height          =   975
      Left            =   960
      TabIndex        =   6
      Top             =   3240
      Width           =   2535
   End
   Begin VB.Label Label3 
      Caption         =   "Weight of residue after Combustion"
      Height          =   1215
      Left            =   11760
      TabIndex        =   2
      Top             =   480
      Width           =   3135
   End
   Begin VB.Label Label2 
      Caption         =   "Weight after loss of Moisture"
      Height          =   1215
      Left            =   4200
      TabIndex        =   1
      Top             =   480
      Width           =   2895
   End
   Begin VB.Label Label1 
      Caption         =   "Initial Weight of Coal Sample"
      Height          =   1215
      Left            =   720
      TabIndex        =   0
      Top             =   480
      Width           =   2775
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
w1 = Text1.Text
w2 = Text2.Text
w3 = Text3.Text
w4 = Text4.Text
Text5.Text = (w1 - w2) / w1 * 100
Text6.Text = (w2 - w3) / w1 * 100
Text7.Text = w4 / w1 * 100
Text8.Text = 100 - Text5.Text - Text6.Text - Text7.Text

End Sub

Private Sub Command2_Click()
Unload Me
Form1.Show
End Sub

Private Sub Form_Load()
Label1.Font.Size = 22
Label2.Font.Size = 22
Label3.Font.Size = 22
Label4.Font.Size = 18
Label5.Font.Size = 18
Label6.Font.Size = 18
Label7.Font.Size = 18
Label8.Font.Size = 18
Command1.Font.Size = 26
Command2.Font.Size = 26
End Sub


Private Sub Form_Unload(Cancel As Integer)
Form1.Show
End Sub

