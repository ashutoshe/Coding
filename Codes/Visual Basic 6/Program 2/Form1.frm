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
   Begin VB.TextBox Text1 
      Height          =   2175
      Left            =   2640
      TabIndex        =   1
      Top             =   960
      Width           =   5655
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Sum Of 100 Numbers"
      Height          =   2295
      Left            =   2040
      TabIndex        =   0
      Top             =   4440
      Width           =   7095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub command1_click()
Dim a, b, c
c = 0
For a = 1 To 100 Step 1
b = InputBox("Eter the Number" & "" & a)
c = c + b
Next
Text1.Text = c
End Sub




Private Sub Text1_Change()
MsgBox ("Please Click the Big Button")
End Sub
