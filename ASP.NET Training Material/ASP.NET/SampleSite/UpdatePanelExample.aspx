﻿<%@ Page Language="C#" AutoEventWireup="true" CodeFile="UpdatePanelExample.aspx.cs" Inherits="UpdatePanelExample" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:ScriptManager ID="ScriptManager1" runat="server">
        </asp:ScriptManager>
    
     <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>


        <asp:UpdatePanel ID="UpdatePanel1" runat="server">
        <ContentTemplate>
         
    <p>
        &nbsp;</p>
    <asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Button" />
    </p>
         </ContentTemplate>
        </asp:UpdatePanel>

    </div>
   
  
    </form>
</body>
</html>
