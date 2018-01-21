<%@ Control Language="C#" AutoEventWireup="true" CodeFile="WebUserControl.ascx.cs" Inherits="WebUserControl" %>
<asp:Calendar ID="Calendar1" runat="server"></asp:Calendar>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Button" />
        <asp:Image ID="Image1" runat="server" ImageUrl="~/Images/Koala.jpg" 
            style="z-index: 1; left: 293px; top: 82px; position: absolute; height: 117px; width: 134px" />
        <br />
        <asp:Label ID="Label1" runat="server" Font-Bold="True" Font-Size="X-Large" 
            Text="My Sample Site"></asp:Label>