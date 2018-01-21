<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:Label ID="Label1" text-align="center" runat="server" BackColor="#FFFF66" Font-Bold="True" Font-Italic="False" Font-Names="Arial Black" Font-Size="Large" Font-Underline="False" ForeColor="Red" Text="REGISTRATION FORM" BorderStyle="Solid" BorderWidth="3px"></asp:Label>
        <br />
        <br />
        <asp:Label ID="Label2" runat="server" Text="Full Name: "></asp:Label>
        <br />
        <asp:TextBox ID="txtname" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="txtname" ErrorMessage="Name Field Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="txtname" Display="Dynamic" ErrorMessage="Name cannot contain Number or special characters" ForeColor="Red" SetFocusOnError="True" ValidationExpression="^[a-zA-Z ]*"></asp:RegularExpressionValidator>
        <br />
        <asp:Label ID="Label13" runat="server" Text="Gender:"></asp:Label>
        <br />
        <asp:RadioButtonList ID="RadioButtonList1" runat="server">
            <asp:ListItem Value="Male">Male</asp:ListItem>
            <asp:ListItem>Female</asp:ListItem>
        </asp:RadioButtonList>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator22" runat="server" ControlToValidate="RadioButtonList1" ErrorMessage="Gender Required" ForeColor="Red" SetFocusOnError="True" InitialValue="0">*</asp:RequiredFieldValidator>
        <br />
        <asp:Label ID="Label3" runat="server" Text="Email_Id: "></asp:Label>
        <br />
        <asp:TextBox ID="txtemail" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="txtemail" ErrorMessage="Email_Id Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="txtemail" Display="Dynamic" ErrorMessage="Incorrect Email Id Format" ForeColor="Red" SetFocusOnError="True" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
        <br />
        <asp:Label ID="Label4" runat="server" Text="Password:"></asp:Label>
        <br />
        <asp:TextBox ID="txtpswd" runat="server" TextMode="Password"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator12" runat="server" ControlToValidate="txtpswd" ErrorMessage="Password Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator ID="RegularExpressionValidator3" runat="server" ControlToValidate="txtpswd" ErrorMessage="Password Should cantain 1 Uppercase ,1 lowercase, 1 digit and 1 Special Character" ForeColor="Red" SetFocusOnError="True" ValidationExpression="^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[$@$!%*?&amp;])[A-Za-z\d$@$!%*?&amp;]{8,}"></asp:RegularExpressionValidator>
        <br />
        <asp:Label ID="Label5" runat="server" Text="Confirm Password:"></asp:Label>
        <br />
        <asp:TextBox ID="txtconfpswd" runat="server" TextMode="Password"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator13" runat="server" ControlToValidate="txtconfpswd" ErrorMessage="Confirm password Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="txtpswd" ControlToValidate="txtconfpswd" Display="Dynamic" ErrorMessage="Confirm Password and Password Do not match" ForeColor="Red" SetFocusOnError="True"></asp:CompareValidator>
        <br />
        <asp:Label ID="Label6" runat="server" Text="Date Of Birth"></asp:Label>
        <br />
        <asp:TextBox ID="txtdob" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator14" runat="server" ControlToValidate="txtdob" Display="Dynamic" ErrorMessage="D.O.B Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <asp:CompareValidator ID="DateValidator" runat="server" ControlToValidate="txtdob" ErrorMessage="DOB cannot be greater than today's Date" ForeColor="Red" Operator="LessThanEqual" SetFocusOnError="True" Type="Date"></asp:CompareValidator>
        <br />
        <asp:Calendar ID="Calendar1" runat="server" BackColor="White" BorderColor="#999999" CellPadding="4" DayNameFormat="Shortest" Font-Names="Verdana" Font-Size="8pt" ForeColor="Black" Height="180px" OnSelectionChanged="Calendar1_SelectionChanged" Width="200px">
            <DayHeaderStyle BackColor="#CCCCCC" Font-Bold="True" Font-Size="7pt" />
            <NextPrevStyle VerticalAlign="Bottom" />
            <OtherMonthDayStyle ForeColor="#808080" />
            <SelectedDayStyle BackColor="#666666" Font-Bold="True" ForeColor="White" />
            <SelectorStyle BackColor="#CCCCCC" />
            <TitleStyle BackColor="#999999" BorderColor="Black" Font-Bold="True" />
            <TodayDayStyle BackColor="#CCCCCC" ForeColor="Black" />
            <WeekendDayStyle BackColor="#FFFFCC" />
        </asp:Calendar>
        <br />
        <asp:Label ID="Label7" runat="server" Text="Mobile Number"></asp:Label>
        <br />
        <asp:TextBox ID="txtmobno" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator15" runat="server" ControlToValidate="txtmobno" ErrorMessage="Mobile Number Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <asp:RegularExpressionValidator ID="RegularExpressionValidator4" runat="server" ControlToValidate="txtmobno" ErrorMessage="Contact Number only contains 10 digits." ForeColor="Red" SetFocusOnError="True" ValidationExpression="^\d{10}$"></asp:RegularExpressionValidator>
        <br />
        <asp:Label ID="Label8" runat="server" Text="Select City:"></asp:Label>
        <br />
        <asp:DropDownList ID="DropDownCity" runat="server">
            <asp:ListItem Value="0">Select</asp:ListItem>
            <asp:ListItem>Mumbai</asp:ListItem>
            <asp:ListItem>Delhi</asp:ListItem>
            <asp:ListItem>Kolkata</asp:ListItem>
            <asp:ListItem>Chennai</asp:ListItem>
        </asp:DropDownList>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator16" runat="server" ControlToValidate="DropDownCity" ErrorMessage="Select At Least One City" ForeColor="Red" InitialValue="0" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <br />
        <asp:Label ID="Label9" runat="server" Text="Hobbies: "></asp:Label>
        <br />
        <asp:DropDownList ID="DropDownHobbies" runat="server">
            <asp:ListItem Value="0">Select</asp:ListItem>
            <asp:ListItem>Reading</asp:ListItem>
            <asp:ListItem>Dancing</asp:ListItem>
            <asp:ListItem>Raping</asp:ListItem>
            <asp:ListItem>Swimming</asp:ListItem>
            <asp:ListItem>Listening Music</asp:ListItem>
        </asp:DropDownList>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator17" runat="server" ControlToValidate="DropDownHobbies" ErrorMessage="Select Atleast one hobby" ForeColor="Red" InitialValue="0" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <br />
        <asp:Label ID="Label10" runat="server" Text="Programming Languages Known: "></asp:Label>
        <br />
        <asp:ListBox ID="ListBox1" runat="server" SelectionMode="Multiple">
            <asp:ListItem Value="0">Select</asp:ListItem>
            <asp:ListItem>C</asp:ListItem>
            <asp:ListItem>C++</asp:ListItem>
            <asp:ListItem>Java</asp:ListItem>
            <asp:ListItem>SQL</asp:ListItem>
            <asp:ListItem>HTML</asp:ListItem>
        </asp:ListBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator21" runat="server" ControlToValidate="ListBox1" ErrorMessage="Select Atleast one Language" ForeColor="Red" InitialValue="0" SetFocusOnError="True" Display="Dynamic">*</asp:RequiredFieldValidator>
        <br />
        <asp:Label ID="Label11" runat="server" Text="Security Question"></asp:Label>
        <br />
        <asp:DropDownList ID="DropDownSecureQues" runat="server">
            <asp:ListItem Value="0">select</asp:ListItem>
            <asp:ListItem>What was your 1st school name?</asp:ListItem>
            <asp:ListItem>What is your grandmother&#39;s name?</asp:ListItem>
            <asp:ListItem>What was the name of your first pet?</asp:ListItem>
            <asp:ListItem>What is the model number of your 1st Phone?</asp:ListItem>
        </asp:DropDownList>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator19" runat="server" ControlToValidate="DropDownSecureQues" Display="Dynamic" ErrorMessage="Select Atleast One Security Question" ForeColor="Red" InitialValue="0" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <br />
        <asp:Label ID="Label12" runat="server" Text="Security Answer: "></asp:Label>
        <br />
        <asp:TextBox ID="txtans" runat="server"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator20" runat="server" ControlToValidate="txtans" ErrorMessage="Security Answer Required" ForeColor="Red" SetFocusOnError="True">*</asp:RequiredFieldValidator>
        <br />
        <asp:ValidationSummary ID="ValidationSummary1" runat="server" ShowMessageBox="True" Width="173px" />
        <br />
        <br />
        <br />
        <asp:Button ID="Button1" runat="server" Text="Submit" />
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <input id="Reset1" type="reset" value="reset" /><br />
    
    </div>
    </form>
</body>
</html>
