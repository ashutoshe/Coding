VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   7470
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   10845
   LinkTopic       =   "Form1"
   ScaleHeight     =   7470
   ScaleWidth      =   10845
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "EXIT"
      Height          =   3255
      Left            =   4440
      TabIndex        =   2
      Top             =   5160
      Width           =   6735
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Proximate Analysis"
      Height          =   3015
      Left            =   8640
      TabIndex        =   1
      Top             =   1440
      Width           =   6375
   End
   Begin VB.CommandButton Command1 
      Caption         =   "GCV and NCV"
      Height          =   3015
      Left            =   720
      TabIndex        =   0
      Top             =   1440
      Width           =   6135
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Form2.Show
Me.Hide
End Sub

Private Sub Command2_Click()
Form3.Show
Me.Hide
End Sub

Private Sub Command3_Click()
MsgBox ("Thank You")
Unload Me
End Sub

Private Sub Form_Load()
Command1.Font.Size = 26
Command2.Font.Size = 26
Command3.Font.Size = 26
End Sub
