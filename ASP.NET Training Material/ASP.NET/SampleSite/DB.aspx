<%@ Page Language="C#" AutoEventWireup="true" CodeFile="DB.aspx.cs" Inherits="DB" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:GridView ID="GridView1" runat="server" BackColor="White" 
        BorderColor="White" BorderStyle="Ridge" BorderWidth="2px" CellPadding="3" 
        CellSpacing="1" GridLines="None">
        <FooterStyle BackColor="#C6C3C6" ForeColor="Black" />
        <HeaderStyle BackColor="#4A3C8C" Font-Bold="True" ForeColor="#E7E7FF" />
        <PagerStyle BackColor="#C6C3C6" ForeColor="Black" HorizontalAlign="Right" />
        <RowStyle BackColor="#DEDFDE" ForeColor="Black" />
        <SelectedRowStyle BackColor="#9471DE" Font-Bold="True" ForeColor="White" />
        <SortedAscendingCellStyle BackColor="#F1F1F1" />
        <SortedAscendingHeaderStyle BackColor="#594B9C" />
        <SortedDescendingCellStyle BackColor="#CAC9C9" />
        <SortedDescendingHeaderStyle BackColor="#33276A" />
    </asp:GridView>
    <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" 
        onselectedindexchanged="DropDownList1_SelectedIndexChanged">
    </asp:DropDownList>
    <p>
        <asp:TextBox ID="txteid" runat="server"></asp:TextBox>
    </p>
    <asp:TextBox ID="txtename" runat="server"></asp:TextBox>
    <p>
        <asp:TextBox ID="txtesalary" runat="server"></asp:TextBox>
    </p>
    <p>
        <asp:TextBox ID="txtcity" runat="server"></asp:TextBox>
    </p>
    <asp:TextBox ID="txtdid" runat="server"></asp:TextBox>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Insert" />
&nbsp;<asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="Delete" />
&nbsp;<asp:Button ID="Button3" runat="server" onclick="Button3_Click" Text="Update" />
    </p>
    <p>
        <asp:HyperLink ID="HyperLink1" runat="server" 
            NavigateUrl="~/ChangePassword.aspx">Change Password</asp:HyperLink>
    </p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    </form>
</body>
</html>
