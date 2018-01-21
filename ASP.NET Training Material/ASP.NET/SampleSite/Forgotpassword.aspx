<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Forgotpassword.aspx.cs" Inherits="Forgotpassword" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <p>
        Enter User Name:
        <asp:TextBox ID="txtusername" runat="server"></asp:TextBox>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Submit" />
    </p>
    <p>
        <asp:Label ID="lbluser" runat="server" Font-Bold="True" ForeColor="Red" 
            Text="Invalid User Name" Visible="False"></asp:Label>
    </p>
    <asp:Panel ID="Panel1" runat="server" Height="115px" Visible="False" 
        Width="467px">
        YourSecurity Question:&nbsp;
        <asp:Label ID="lblsecq" runat="server" Font-Bold="True" Text="Label"></asp:Label>
        <br />
        <br />
        Enter Security Answer:
        <asp:TextBox ID="txtseca" runat="server"></asp:TextBox>
        <br />
        <asp:Button ID="Button2" runat="server" onclick="Button2_Click" 
            Text="Get Password" />
        <br />
        <asp:Label ID="lblmsg" runat="server" Font-Bold="True" Text="Label"></asp:Label>
    </asp:Panel>
    </form>
</body>
</html>
