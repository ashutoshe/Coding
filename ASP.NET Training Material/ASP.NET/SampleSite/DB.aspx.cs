using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data;
using System.Configuration;

public partial class DB : System.Web.UI.Page
{
    static string str = ConfigurationManager.ConnectionStrings["mycon"].ConnectionString.ToString();
        SqlConnection con=new SqlConnection(str);
    //SqlConnection con = new SqlConnection("Server=199.79.62.22;uid=training;pwd=Training@786;database=cmp");
    protected void Page_Load(object sender, EventArgs e)
    {

        if (!Page.IsPostBack)
        {
            filldata();
            filldropdown();
        }
        //DropDownList1.DataSource = ds.Tables[0];
        //DropDownList1.DataTextField = "ename";
        //DropDownList1.DataBind();
    }

    public void filldata()
    {
        SqlDataAdapter da = new SqlDataAdapter("select * from employee", con);
        DataSet ds = new DataSet();
        da.Fill(ds, "emp");
        GridView1.DataSource = ds.Tables["emp"];
        GridView1.DataBind();
    }

    public void filldropdown()
    {
        DropDownList1.Items.Clear();
        SqlCommand cmd = new SqlCommand("select * from employee", con);
        con.Open();
        SqlDataReader dr = cmd.ExecuteReader();
        while (dr.Read())
        {
            DropDownList1.Items.Add(dr["eid"].ToString());
        }
        con.Close();
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        SqlCommand cmd = new SqlCommand("select * from employee where eid=@eid", con);
        cmd.Parameters.Add("@eid", DropDownList1.SelectedItem.ToString());
        con.Open();
        SqlDataReader dr = cmd.ExecuteReader();
        if(dr.Read())
        {
            txteid.Text = dr[0].ToString();
            txtename.Text = dr[1].ToString();
            txtesalary.Text = dr["esalary"].ToString();
            txtcity.Text = dr[3].ToString();
            txtdid.Text = dr["did"].ToString();
        }
        con.Close();
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        SqlCommand cmd=new SqlCommand("insert into employee values(@eid,@ename,@sal,@city,@did)",con);
        cmd.Parameters.Add("@eid", txteid.Text);
        cmd.Parameters.Add("@ename", txtename.Text);
        cmd.Parameters.Add("@sal", txtesalary.Text);
        cmd.Parameters.Add("@city", txtcity.Text);
        cmd.Parameters.Add("@did", txtdid.Text);
        con.Open();
        cmd.ExecuteNonQuery();
        con.Close();

        filldata();
        filldropdown();
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        SqlCommand cmd = new SqlCommand("delete from employee where eid=@eid", con);
        cmd.Parameters.Add("@eid", DropDownList1.SelectedItem.ToString());
       
        con.Open();
        cmd.ExecuteNonQuery();
        con.Close();

        filldata();
        filldropdown();
    }
    protected void Button3_Click(object sender, EventArgs e)
    {
        SqlCommand cmd = new SqlCommand("update employee set ename=@ename,esalary=@sal,city=@city,did=@did where eid=@eid", con);
        cmd.Parameters.Add("@eid", DropDownList1.SelectedItem.ToString());
        cmd.Parameters.Add("@ename", txtename.Text);
        cmd.Parameters.Add("@sal", txtesalary.Text);
        cmd.Parameters.Add("@city", txtcity.Text);
        cmd.Parameters.Add("@did", txtdid.Text);
        con.Open();
        cmd.ExecuteNonQuery();
        con.Close();

        filldata();
        filldropdown();
    }
}