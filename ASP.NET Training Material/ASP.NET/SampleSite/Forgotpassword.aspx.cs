using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Drawing;

public partial class Forgotpassword : System.Web.UI.Page
{
    static string pwd, seca;
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlConnection con = new SqlConnection("Server=199.79.62.22;uid=training;pwd=Training@786;database=cmp");
        SqlCommand cmd = new SqlCommand("select password,secq,seca from registration where username=@name", con);
        cmd.Parameters.Add("@name", txtusername.Text);
        con.Open();
        SqlDataReader dr = cmd.ExecuteReader();
        
        if (dr.Read())
        {
            pwd = dr["password"].ToString();
            lblsecq.Text = dr["secq"].ToString();
            seca = dr["seca"].ToString();
            Panel1.Visible = true;
            lbluser.Visible = false;
        }
        else
        {
            lbluser.Visible = true;
            txtusername.Text = "";
            txtusername.Focus();
        }
        con.Close();
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        if (txtseca.Text == seca)
        {
            lblmsg.Text = "Your Password is " + pwd;
            lblmsg.ForeColor = Color.Green;
        }
        else
        {
            lblmsg.Text = "Incorrect Security Answer";
            lblmsg.ForeColor = Color.Red;
            txtseca.Text = "";
            txtseca.Focus();
        }
    }
}