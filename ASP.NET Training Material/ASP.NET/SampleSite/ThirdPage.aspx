<%@ Page Language="C#" AutoEventWireup="true" CodeFile="ThirdPage.aspx.cs" Inherits="ThirdPage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:ListBox ID="ListBox1" runat="server" Height="95px" 
        SelectionMode="Multiple">
        <asp:ListItem>Reading</asp:ListItem>
        <asp:ListItem>writing</asp:ListItem>
        <asp:ListItem>Cooking</asp:ListItem>
        <asp:ListItem>Dancing</asp:ListItem>
        <asp:ListItem>Singing</asp:ListItem>
    </asp:ListBox>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Button" />
    </p>
    <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
    <asp:CheckBoxList ID="CheckBoxList1" runat="server" Width="95px">
        <asp:ListItem>C</asp:ListItem>
        <asp:ListItem>C++</asp:ListItem>
        <asp:ListItem>JAVA</asp:ListItem>
        <asp:ListItem>SQL</asp:ListItem>
        <asp:ListItem>ORACLE</asp:ListItem>
    </asp:CheckBoxList>
    <asp:BulletedList ID="BulletedList1" runat="server" BulletStyle="UpperAlpha" 
        Height="38px" Width="108px">
        <asp:ListItem>Red</asp:ListItem>
        <asp:ListItem>Green</asp:ListItem>
        <asp:ListItem>Blue</asp:ListItem>
        <asp:ListItem>Yellow</asp:ListItem>
    </asp:BulletedList>
    </form>
</body>
</html>
