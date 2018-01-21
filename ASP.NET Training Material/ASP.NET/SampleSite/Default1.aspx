<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default1.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" 
        onselectedindexchanged="DropDownList1_SelectedIndexChanged">
    </asp:DropDownList>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Button" />
    </p>
    <asp:Label ID="lblmsg" runat="server" Text="Label"></asp:Label>
    </form>
</body>
</html>
