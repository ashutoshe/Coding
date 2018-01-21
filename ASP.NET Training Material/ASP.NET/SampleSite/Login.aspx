<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Login.aspx.cs" Inherits="Login" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:Panel ID="Panel1" runat="server" BorderColor="#0000CC" BorderStyle="Solid" 
        BorderWidth="2px" 
        style="z-index: 1; left: 157px; top: 109px; position: absolute; height: 219px; width: 314px">
        <br />
        Enter User Name:
        <asp:TextBox ID="txtusername" runat="server"></asp:TextBox>
        <br />
        <br />
        Enter Password:
        <asp:TextBox ID="txtpassword" runat="server"></asp:TextBox>
        <br />
        <asp:Label ID="lblmsg" runat="server" Font-Bold="True" ForeColor="Red" 
            Text="Incorrect Username or Password" Visible="False"></asp:Label>
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Login" />
        &nbsp;
        <input id="Reset1" type="reset" value="reset" />
        <br />
        <asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl="~/Default.aspx">New User?</asp:HyperLink>
        <br />
        <br />
        <asp:HyperLink ID="HyperLink2" runat="server" 
            NavigateUrl="~/Forgotpassword.aspx">Forgot Password?</asp:HyperLink>
        <br />
    </asp:Panel>
    </form>
</body>
</html>
