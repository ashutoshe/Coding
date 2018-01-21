VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   10950
   ScaleWidth      =   15120
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "Exit"
      Height          =   495
      Left            =   6480
      TabIndex        =   8
      Top             =   3000
      Width           =   1095
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Clear"
      Height          =   495
      Left            =   4560
      TabIndex        =   4
      Top             =   3000
      Width           =   1695
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Validate"
      Height          =   495
      Left            =   2640
      TabIndex        =   3
      Top             =   3000
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Index           =   2
      Left            =   4320
      TabIndex        =   2
      Top             =   2280
      Width           =   3255
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Index           =   1
      Left            =   4320
      TabIndex        =   1
      Top             =   1680
      Width           =   3255
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Index           =   0
      Left            =   4320
      TabIndex        =   0
      Top             =   1080
      Width           =   3255
   End
   Begin VB.Label Label1 
      Caption         =   "Date Of Birth"
      Height          =   375
      Index           =   2
      Left            =   2280
      TabIndex        =   7
      Top             =   1680
      Width           =   1695
   End
   Begin VB.Label Label1 
      Caption         =   "Telephone Number"
      Height          =   375
      Index           =   1
      Left            =   2280
      TabIndex        =   6
      Top             =   2280
      Width           =   1695
   End
   Begin VB.Label Label1 
      Caption         =   "Name"
      Height          =   375
      Index           =   0
      Left            =   2280
      TabIndex        =   5
      Top             =   1080
      Width           =   1695
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub command1_click()

Dim a As Integer
Dim i As Integer
Dim ln As Integer
a = 0
ln = Len(Text1(0).Text)

If ln = 0 Then
MsgBox ("Name Cannot Be Blank")
a = 1

Else
For i = 1 To ln
ch = UCase(Mid(Text1(0).Text, i, ln))
If Not ((ch >= "A" And ch <= "Z") Or (ch = "")) Then
MsgBox ("Invalid Name")
Text1(0).Text = ""
Text1(0).SetFocus
a = 1
i = ln + 1
End If

Next i

End If

If IsDate(Text1(1).Text) <> True Then
MsgBox ("Enter Valid Date")
Text1(1).Text = ""
Text1(1).SetFocus
a = 1
End If

If IsNumeric(Text1(2).Text) <> True Then
MsgBox ("Enter Valid Telephone Number")
Text1(2).Text = ""
Text1(2).SetFocus
a = 1
End If

If a = 0 Then
MsgBox ("All data fields are valid")
End If

End Sub

Private Sub command2_click()
Text1(0).Text = ""
Text1(1).Text = ""
Text1(2).Text = ""
End Sub

Private Sub Command3_Click()
Unload Me
End Sub

