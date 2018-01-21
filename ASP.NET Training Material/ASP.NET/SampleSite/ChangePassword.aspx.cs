using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Drawing;

public partial class ChangePassword : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection("Server=199.79.62.22;uid=training;pwd=Training@786;database=cmp");
        string username = Session["username"].ToString();
        string dbpwd = Session["password"].ToString();

        if (txtoldpwd.Text != dbpwd)
        {
            lblmsg.Text = "Incorrect Old Password";
            lblmsg.ForeColor = Color.Red;
        }
        else if (txtnewpwd.Text ==dbpwd)
        {
            lblmsg.Text = "New password can not be same as Old Password";
            lblmsg.ForeColor = Color.Red;
        }
        else if (txtnewpwd.Text != txtconfirmpwd.Text)
        {
            lblmsg.Text = "Password and Confirm Password Doesnot Match";
            lblmsg.ForeColor = Color.Red;
        }
        else
        {
            SqlCommand cmd = new SqlCommand("update registration set password=@pwd where username=@user", con);
            cmd.Parameters.Add("@pwd", txtnewpwd.Text);
            cmd.Parameters.Add("@user", username);
            con.Open();
            cmd.ExecuteNonQuery();
            con.Close();
            lblmsg.Text = "Password Changed Successfully";
            lblmsg.ForeColor = Color.Green;
        }
    }
}