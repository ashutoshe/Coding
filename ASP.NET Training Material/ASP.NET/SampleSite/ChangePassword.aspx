<%@ Page Language="C#" AutoEventWireup="true" CodeFile="ChangePassword.aspx.cs" Inherits="ChangePassword" %>

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
        Enter Old Password
        <asp:TextBox ID="txtoldpwd" runat="server"></asp:TextBox>
    </p>
    <p>
        Enter New Password<asp:TextBox ID="txtnewpwd" runat="server"></asp:TextBox>
    </p>
    <p>
        Enter Confirm Password
        <asp:TextBox ID="txtconfirmpwd" runat="server"></asp:TextBox>
    </p>
    <asp:Button ID="Button1" runat="server" onclick="Button1_Click" 
        Text="Change Password" />
    <p>
        <asp:Label ID="lblmsg" runat="server" Text="Label"></asp:Label>
    </p>
    </form>
</body>
</html>
