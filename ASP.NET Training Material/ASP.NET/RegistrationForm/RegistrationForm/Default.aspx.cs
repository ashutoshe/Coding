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
        if(!Page.IsPostBack)
        {
            txtname.Text = "";
            txtdob.Text = "dd/MM/yyyy";
            txtemail.Text = "example@mail.com";
        }
        DateValidator.ValueToCompare = DateTime.Today.ToShortDateString();
        Calendar1.Visible = true;
    }
    protected void ImageButton1_Click(object sender, ImageClickEventArgs e)
    {
        Calendar1.Visible = true;
    }
    protected void Calendar1_SelectionChanged(object sender, EventArgs e)
    {
        txtdob.Text = Calendar1.SelectedDate.ToShortDateString();
        Calendar1.Visible = false;
    }
}