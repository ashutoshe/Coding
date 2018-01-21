using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class FirstPage : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        Response.Write("Hello " + txtname.Text);
    }
    protected void ImageButton1_Click(object sender, ImageClickEventArgs e)
    {
        Calendar1.Visible = true;
    }
    protected void Calendar1_SelectionChanged(object sender, EventArgs e)
    {
        txtdate.Text = Calendar1.SelectedDate.ToString("dd-MM-yyyy");
        Calendar1.Visible = false;
    }

    protected void LinkButton1_Click(object sender, EventArgs e)
    {
        //Response.Redirect("secondpage.aspx");
        //Response.Redirect("secondpage.aspx?name=" + txtname.Text + "&dt=" + txtdate.Text);
        Server.Transfer("secondpage.aspx?name=" + txtname.Text + "&dt=" + txtdate.Text);
    }
}