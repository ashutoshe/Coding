<%@ Page Language="C#" AutoEventWireup="true" CodeFile="SecondPage.aspx.cs" Inherits="SecondPage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:RadioButton ID="rbmale" runat="server" GroupName="a" Text="Male" />
    <p>
        <asp:RadioButton ID="rbfemale" runat="server" GroupName="a" Text="Female" />
    </p>
    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Button" />
    <p>
        <asp:Label ID="lblmsg" runat="server" Font-Bold="True" ForeColor="#000099" 
            Text="Label"></asp:Label>
    </p>
    <asp:RadioButtonList ID="RadioButtonList1" runat="server">
        <asp:ListItem>Male</asp:ListItem>
        <asp:ListItem>Female</asp:ListItem>
    </asp:RadioButtonList>
    </form>
</body>
</html>
