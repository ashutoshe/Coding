VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   3030
   ScaleWidth      =   4560
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "Exit"
      Height          =   495
      Left            =   4920
      TabIndex        =   14
      Top             =   5040
      Width           =   1335
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Clear"
      Height          =   495
      Left            =   3360
      TabIndex        =   13
      Top             =   5040
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Result"
      Height          =   495
      Left            =   1800
      TabIndex        =   12
      Top             =   5040
      Width           =   1335
   End
   Begin VB.TextBox Text6 
      Height          =   495
      Left            =   4200
      TabIndex        =   5
      Top             =   4320
      Width           =   2055
   End
   Begin VB.TextBox Text5 
      Height          =   495
      Left            =   4200
      TabIndex        =   4
      Top             =   3600
      Width           =   2055
   End
   Begin VB.TextBox Text4 
      Height          =   495
      Left            =   4200
      TabIndex        =   3
      Top             =   2880
      Width           =   2055
   End
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   4200
      TabIndex        =   2
      Top             =   2160
      Width           =   2055
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   4200
      TabIndex        =   1
      Top             =   1440
      Width           =   2055
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   4200
      TabIndex        =   0
      Top             =   720
      Width           =   2055
   End
   Begin VB.Label Label6 
      Caption         =   "Subject 6"
      Height          =   495
      Left            =   1800
      TabIndex        =   11
      Top             =   4320
      Width           =   1695
   End
   Begin VB.Label Label5 
      Caption         =   "Subject 5"
      Height          =   495
      Left            =   1800
      TabIndex        =   10
      Top             =   3600
      Width           =   1695
   End
   Begin VB.Label Label4 
      Caption         =   "Subject 4"
      Height          =   495
      Left            =   1800
      TabIndex        =   9
      Top             =   2880
      Width           =   1695
   End
   Begin VB.Label Label3 
      Caption         =   "Subject 3"
      Height          =   495
      Left            =   1800
      TabIndex        =   8
      Top             =   2160
      Width           =   1695
   End
   Begin VB.Label Label2 
      Caption         =   "Subject 2"
      Height          =   495
      Left            =   1800
      TabIndex        =   7
      Top             =   1440
      Width           =   1695
   End
   Begin VB.Label Label1 
      Caption         =   "Subject 1"
      Height          =   495
      Left            =   1800
      TabIndex        =   6
      Top             =   720
      Width           =   1695
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim test As Boolean
Dim averag
Dim s1, s2, s3, s4, s5, s6
test = True
s1 = Val(Text1.Text)
s2 = Val(Text2.Text)
s3 = Val(Text3.Text)
s4 = Val(Text4.Text)
s5 = Val(Text5.Text)
s6 = Val(Text6.Text)

averag = (s1 + s2 + s3 + s4 + s5 + s6) / 6

Select Case test
Case s1 < 40 Or s2 < 40 Or s3 < 40 Or s4 < 40 Or s5 < 40 Or s6 < 40
MsgBox ("Failed")

Case averag < 60
MsgBox ("Second Class")

Case Else
MsgBox ("First Class")
End Select

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Text3.Text = ""
Text4.Text = ""
Text5.Text = ""
Text6.Text = ""
End Sub

Private Sub Command3_Click()
Unload Me
End Sub
