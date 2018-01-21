using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class _Default : System.Web.UI.Page
{
    static string str;
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
    protected void Button1_Click(object sender, EventArgs e)
    {
       str=null;
            for(int i=0;i<ListBox1.Items.Count;i++)
            {
                if(ListBox1.Items[i].Selected==true)
                {
                str=str+ListBox1.Items[i].Text.ToString()+",";
                }
            }
        SqlConnection con = new SqlConnection("Server=199.79.62.22;uid=training;pwd=Training@786;database=cmp");
        SqlCommand cmd = new SqlCommand("insert into registration values(@n,@g,@e,@p,@d,@m,@c,@h,@pr,@q,@a)", con);
        cmd.Parameters.Add("@n", txtname.Text);
        cmd.Parameters.Add("@g", RadioButtonList1.SelectedItem.Text.ToString());

        cmd.Parameters.Add("@e", txtemail.Text);
        cmd.Parameters.Add("@p", txtpswd.Text);
        cmd.Parameters.Add("@d", txtdob.Text);
        cmd.Parameters.Add("@m", txtmobno.Text);
        cmd.Parameters.Add("@c", DropDownCity.SelectedItem.ToString());
        cmd.Parameters.Add("@h", DropDownHobbies.SelectedItem.ToString());
        cmd.Parameters.Add("@pr",str );
        cmd.Parameters.Add("@q", DropDownSecureQues.SelectedItem.ToString());
        cmd.Parameters.Add("@a", txtans.Text);

        con.Open();
        cmd.ExecuteNonQuery();
        con.Close();

        Response.Write("Details Saved Successfully");
    }
}