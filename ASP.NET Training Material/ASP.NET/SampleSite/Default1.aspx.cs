using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!Page.IsPostBack)
        {
            DropDownList1.Items.Add("Red");
            DropDownList1.Items.Add("Green");
            DropDownList1.Items.Add("Blue");
            DropDownList1.Items.Add("Yellow");
        }
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        lblmsg.Text = "You have Selected " + DropDownList1.SelectedItem.ToString();
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        lblmsg.Text = "You have Selected " + DropDownList1.SelectedItem.ToString();
    }
}