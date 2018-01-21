<%@ Page Language="C#" AutoEventWireup="true" CodeFile="UpdateProgressExample.aspx.cs" Inherits="UpdateProgressExample" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <asp:ScriptManager ID="ScriptManager1" runat="server">
    </asp:ScriptManager>
    <div>
    
    </div>
    <asp:UpdatePanel ID="UpdatePanel1" runat="server">
    <ContentTemplate>
        <asp:Button runat="server" Text="Button" onclick="Unnamed1_Click" />
    </ContentTemplate>
    </asp:UpdatePanel>

    <asp:UpdateProgress ID="UpdateProgress1" runat="server">
    <ProgressTemplate>
        wait......
    </ProgressTemplate>
    </asp:UpdateProgress>
    </form>
</body>
</html>
