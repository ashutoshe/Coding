VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   6030
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   10830
   LinkTopic       =   "Form2"
   ScaleHeight     =   10935
   ScaleWidth      =   20250
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Back"
      Height          =   1935
      Left            =   7320
      TabIndex        =   13
      Top             =   7200
      Width           =   4815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Calculate"
      Height          =   1935
      Left            =   960
      TabIndex        =   12
      Top             =   7200
      Width           =   4815
   End
   Begin VB.TextBox Text6 
      Height          =   855
      Left            =   7800
      TabIndex        =   11
      Top             =   5640
      Width           =   2175
   End
   Begin VB.TextBox Text5 
      Height          =   855
      Left            =   1920
      TabIndex        =   10
      Top             =   5640
      Width           =   2055
   End
   Begin VB.TextBox Text4 
      Height          =   735
      Left            =   11640
      TabIndex        =   7
      Top             =   2040
      Width           =   1575
   End
   Begin VB.TextBox Text3 
      Height          =   735
      Left            =   8040
      TabIndex        =   6
      Top             =   2040
      Width           =   1575
   End
   Begin VB.TextBox Text2 
      Height          =   735
      Left            =   4560
      TabIndex        =   5
      Top             =   2040
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      Height          =   735
      Left            =   1080
      TabIndex        =   4
      Top             =   2040
      Width           =   1455
   End
   Begin VB.Label Label6 
      Caption         =   "HCV"
      Height          =   1335
      Left            =   8040
      TabIndex        =   9
      Top             =   4080
      Width           =   4215
   End
   Begin VB.Label Label5 
      Caption         =   "GCV"
      Height          =   1215
      Left            =   2280
      TabIndex        =   8
      Top             =   4200
      Width           =   3735
   End
   Begin VB.Label Label2 
      Caption         =   "Percent Hydrogen"
      Height          =   975
      Left            =   4080
      TabIndex        =   3
      Top             =   720
      Width           =   3135
   End
   Begin VB.Label Label3 
      Caption         =   "Percent Oxygen"
      Height          =   975
      Left            =   7560
      TabIndex        =   2
      Top             =   720
      Width           =   3135
   End
   Begin VB.Label Label4 
      Caption         =   "Percent Sulphur"
      Height          =   975
      Left            =   11160
      TabIndex        =   1
      Top             =   720
      Width           =   3135
   End
   Begin VB.Label Label1 
      Caption         =   "Percent Carbon"
      Height          =   975
      Left            =   600
      TabIndex        =   0
      Top             =   720
      Width           =   3135
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
If ((c + h + o + s) > 100) Then
MsgBox ("Sum of percentages cannot be greater than 100")
End If
If ((c + h + o + s) < 100) Then
c = Text1.Text
h = Text2.Text
o = Text3.Text
s = Text4.Text
Text5.Text = (8080 * c + 34500 * (h - (o / 8)) + 2240 * s) / 100
Text6.Text = Text5.Text - (h * 9 * 587 / 100)
Text5.Font.Size = 22
Text6.Font.Size = 22
End If

End Sub

Private Sub Command2_Click()
Unload Me
Form1.Show
End Sub

Private Sub Form_Load()
Command1.Font.Size = 26
Command2.Font.Size = 26
Label1.Font.Size = 18
Label2.Font.Size = 18
Label3.Font.Size = 18
Label4.Font.Size = 18
Label5.Font.Size = 30
Label6.Font.Size = 30


End Sub


Private Sub Form_Unload(Cancel As Integer)
Form1.Show

End Sub
