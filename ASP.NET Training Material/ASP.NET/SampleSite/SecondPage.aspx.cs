using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class SecondPage : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string name = Request.QueryString["name"].ToString();
        string dt = Request.QueryString["dt"].ToString();

        Response.Write("Hi Name is " + name + "<br> Date is : " + dt);
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        //string gender = null;
        //if (rbmale.Checked == true)
        //{
        //    gender = "Male";
        //}
        //else if (rbfemale.Checked == true)
        //{
        //    gender = "Female";
        //}

        //lblmsg.Text = "Gender is " + gender;

        lblmsg.Text ="Gender is "+ RadioButtonList1.SelectedItem.Text.ToString();
    }
}