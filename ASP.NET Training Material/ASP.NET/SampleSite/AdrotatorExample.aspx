﻿<%@ Page Language="C#" AutoEventWireup="true" CodeFile="AdrotatorExample.aspx.cs" Inherits="AdrotatorExample" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
    <asp:AdRotator ID="AdRotator1" runat="server" AdvertisementFile="~/Ads.xml" 
        Height="200px" Target="_blank" Width="200px" />
    </form>
</body>
</html>
