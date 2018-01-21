using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using sample;
using System.Data;

public partial class Usingwebservice : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        Service s = new Service();
        DataSet ds = s.getdata();
        GridView1.DataSource = ds.Tables[0];
        GridView1.DataBind();
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        int a, b;
        a = Convert.ToInt32(TextBox1.Text);
        b = Convert.ToInt32(TextBox2.Text);

        Service s = new Service();
        int c = s.add(a, b);
        Response.Write("The addition is " + c);
    }
}