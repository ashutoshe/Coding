<%@ Page Language="C#" AutoEventWireup="true" CodeFile="MultiViewControl.aspx.cs" Inherits="MultiViewControl" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:MultiView ID="MultiView1" runat="server">
        <asp:View ID="View1" runat="server">
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            <br />
            <br />
            <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Next" />
        </asp:View>

        <asp:View ID="View2" runat="server">
            <asp:RadioButtonList ID="RadioButtonList1" runat="server">
                <asp:ListItem>Male</asp:ListItem>
                <asp:ListItem>Female</asp:ListItem>
            </asp:RadioButtonList>
            <br />
            <asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="Next" />
            <br />
        </asp:View>

        <asp:View ID="View3" runat="server">
            <asp:DropDownList ID="DropDownList1" runat="server">
                <asp:ListItem>Mumbai</asp:ListItem>
                <asp:ListItem>Pune</asp:ListItem>
                <asp:ListItem>Delhi</asp:ListItem>
            </asp:DropDownList>
            <br />
            <br />
            <asp:Button ID="Button3" runat="server" onclick="Button3_Click" Text="Submit" />
            <br />
            <asp:Label ID="lblmsg" runat="server" Text="Label"></asp:Label>
        </asp:View>
    </asp:MultiView>
    </form>
</body>
</html>
