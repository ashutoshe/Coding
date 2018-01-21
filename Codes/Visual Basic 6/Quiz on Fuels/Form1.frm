VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3015
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   3015
   ScaleWidth      =   4560
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command4 
      Caption         =   "Start Over"
      Height          =   1335
      Left            =   7920
      TabIndex        =   11
      Top             =   5520
      Width           =   2895
   End
   Begin VB.TextBox Text1 
      Height          =   855
      Left            =   2520
      TabIndex        =   3
      Top             =   3480
      Width           =   3015
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Exit"
      Height          =   1335
      Left            =   11520
      TabIndex        =   2
      Top             =   5520
      Width           =   3015
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Skip"
      Height          =   1335
      Left            =   4200
      TabIndex        =   1
      Top             =   5520
      Width           =   3015
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Confirm"
      Height          =   1335
      Left            =   600
      TabIndex        =   0
      Top             =   5520
      Width           =   3015
   End
   Begin VB.Label Label1 
      Caption         =   "Most dangerous pollutant emitted in air during incomplete combustion of fuels is 1. CO   2.CO2  3. NO2   4. CH4"
      Height          =   2175
      Left            =   840
      TabIndex        =   10
      Top             =   480
      Width           =   8175
   End
   Begin VB.Label Label7 
      Caption         =   "0"
      Height          =   495
      Left            =   13440
      TabIndex        =   9
      Top             =   2880
      Width           =   1455
   End
   Begin VB.Label Label6 
      Caption         =   "0"
      Height          =   495
      Left            =   13440
      TabIndex        =   8
      Top             =   1920
      Width           =   1455
   End
   Begin VB.Label Label5 
      Caption         =   "0"
      Height          =   495
      Left            =   13440
      TabIndex        =   7
      Top             =   960
      Width           =   1455
   End
   Begin VB.Label Label4 
      Caption         =   "Skipped"
      Height          =   615
      Left            =   10680
      TabIndex        =   6
      Top             =   2880
      Width           =   1815
   End
   Begin VB.Label Label3 
      Caption         =   "Wrong"
      Height          =   615
      Left            =   10680
      TabIndex        =   5
      Top             =   1920
      Width           =   1815
   End
   Begin VB.Label Label2 
      Caption         =   "Correct"
      Height          =   615
      Left            =   10680
      TabIndex        =   4
      Top             =   960
      Width           =   1815
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim c, w, s, x

Public Sub Command1_Click()
If Text1.Text = "1" Or Text1.Text = "2" Or Text1.Text = "3" Or Text1.Text = "4" Then


If x = 1 Then
If Text1.Text = 1 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "Priximate Analysis is done on 1.water  2.coal  3.petrol  4.crude oil"
Text1.Text = ""
End If

If x = 2 Then
If Text1.Text = 2 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "Which of the following is always bigger  1.GCV  2.NCV  3.Can't Determine  4. None"
Text1.Text = ""
End If

If x = 3 Then
If Text1.Text = 1 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "The Anti-Knocking substance among the following is   1.Ethanol  2.Methanol  3.Tetra methyl lead  4.All"
Text1.Text = ""
End If

If x = 4 Then
If Text1.Text = 4 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "Octane and Centane values are used for respectively  1.Petrol,Coal  2.Coal,Petrol  3.Petrol,Diesel  4.Diesel,Petrol"
Text1.Text = ""
End If

If x = 5 Then
If Text1.Text = 3 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "The homogenous propellant is  1.gun powder  2.nitro cellulose  3.hydrogen peroxide  4.aniline"
Text1.Text = ""
End If

If x = 6 Then
If Text1.Text = 2 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "In fixed bed Catalytic Cracking the temperature in degree celcius is  1.425-450  2.625-650  3.925-950  4.1225-1250"
Text1.Text = ""
End If


If x = 7 Then
If Text1.Text = 2 Then
c = c + 1
Else
w = w + 1
End If
Label1.Caption = "End of Quiz"
Text1.Text = ""
End If

If x > 7 Then
MsgBox ("Quiz has Ended")
Text1.Text = ""
End If


Label5.Caption = c
Label6.Caption = w
x = x + 1

Else
MsgBox ("Enter Proper Answer")
Text1.Text = ""
Text1.SetFocus
End If
End Sub

Private Sub Command2_Click()

Text1.Text = "0"
s = s + 1

If x = 1 Then
Label1.Caption = "Priximate Analysis is done on 1.water  2.coal  3.petrol  4.crude oil"
Text1.Text = ""
End If

If x = 2 Then
Label1.Caption = "Which of the following is always bigger  1.GCV  2.NCV  3.Can't Determine  4. None"
Text1.Text = ""
End If

If x = 3 Then
Label1.Caption = "The Anti-Knocking substance among the following is   1.Ethanol  2.Methanol  3.Tetra methyl lead  4.All"
Text1.Text = ""
End If

If x = 4 Then
Label1.Caption = "Octane and Centane values are used for respectively  1.Petrol,Coal  2.Coal,Petrol  3.Petrol,Diesel  4.Diesel,Petrol"
Text1.Text = ""
End If

If x = 5 Then
Label1.Caption = "The homogenous propellant is  1.gun powder  2.nitro cellulose  3.hydrogen peroxide  4.aniline"
Text1.Text = ""
End If

If x = 6 Then
Label1.Caption = "In fixed bed Catalytic Cracking the temperature in degree celcius is  1.425-450  2.625-650  3.925-950  4.1225-1250"
Text1.Text = ""
End If


If x = 7 Then
Label1.Caption = "End of Quiz"
Text1.Text = ""
End If

If x > 7 Then
s = s - 1
MsgBox ("Quiz has Ended")
Text1.Text = ""
End If

Label7.Caption = s
x = x + 1
End Sub

Private Sub Command3_Click()
MsgBox ("Thank You")
Unload Me
End Sub


Private Sub Command4_Click()
x = 1
c = 0
w = 0
s = 0
Label5.Caption = "0"
Label6.Caption = "0"
Label7.Caption = "0"
Label1.Caption = "Most dangerous pollutant emitted in air during incomplete combustion of fuels is 1. CO   2.CO2  3. NO2   4. CH4"
End Sub

Private Sub Form_Load()
c = 0
w = 0
s = 0
x = 1
Label1.Font.Size = 22
Label2.Font.Size = 14
Label3.Font.Size = 14
Label4.Font.Size = 14
Label5.Font.Size = 14
Label6.Font.Size = 14
Label7.Font.Size = 14
Command1.Font.Size = 20
Command2.Font.Size = 20
Command3.Font.Size = 20
Command4.Font.Size = 20

End Sub


