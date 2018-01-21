<%@ Page Language="C#" AutoEventWireup="true" CodeFile="FirstPage.aspx.cs" Inherits="FirstPage" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>This is My First Page</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:Label ID="lblname" runat="server" BackColor="#FF99CC" 
        BorderColor="#CC3300" BorderStyle="Solid" BorderWidth="2px" Font-Bold="True" 
        Font-Names="Times New Roman" Font-Size="Medium" ForeColor="Blue" 
        Text="Please Enter Name"></asp:Label>
&nbsp;<asp:TextBox ID="txtname" runat="server" Font-Bold="True" ForeColor="#CC3300" 
        MaxLength="10" ToolTip="Please Enter Name"></asp:TextBox>
    <p>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="Button" />
    </p>
    <asp:Image ID="Image1" runat="server" Height="116px" 
        ImageUrl="~/Images/Koala.jpg" Width="170px" />
    <p>
        <asp:TextBox ID="txtdate" runat="server"></asp:TextBox>
        <asp:ImageButton ID="ImageButton1" runat="server" Height="16px" 
            ImageUrl="~/Images/Hydrangeas.jpg" onclick="ImageButton1_Click" Width="21px" />
        <asp:Calendar ID="Calendar1" runat="server" BackColor="White" 
            BorderColor="#3366CC" BorderWidth="1px" CellPadding="1" 
            DayNameFormat="Shortest" Font-Names="Verdana" Font-Size="8pt" 
            ForeColor="#003399" Height="16px" 
            onselectionchanged="Calendar1_SelectionChanged" Visible="False" Width="77px">
            <DayHeaderStyle BackColor="#99CCCC" ForeColor="#336666" Height="1px" />
            <NextPrevStyle Font-Size="8pt" ForeColor="#CCCCFF" />
            <OtherMonthDayStyle ForeColor="#999999" />
            <SelectedDayStyle BackColor="#009999" Font-Bold="True" ForeColor="#CCFF99" />
            <SelectorStyle BackColor="#99CCCC" ForeColor="#336666" />
            <TitleStyle BackColor="#003399" BorderColor="#3366CC" BorderWidth="1px" 
                Font-Bold="True" Font-Size="10pt" ForeColor="#CCCCFF" Height="25px" />
            <TodayDayStyle BackColor="#99CCCC" ForeColor="White" />
            <WeekendDayStyle BackColor="#CCCCFF" />
        </asp:Calendar>
        <asp:HyperLink ID="HyperLink1" runat="server" 
            NavigateUrl="http://www.google.com" Target="_blank">Go to Second Page</asp:HyperLink>
    </p>
    <p>
        <asp:LinkButton ID="LinkButton1" runat="server" onclick="LinkButton1_Click">Second Page</asp:LinkButton>
    </p>
    </form>
</body>
</html>
