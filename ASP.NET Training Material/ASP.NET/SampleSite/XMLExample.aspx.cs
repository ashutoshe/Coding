using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Configuration;
using System.Data;
using System.Xml;

public partial class XMLExample : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string str = ConfigurationManager.ConnectionStrings["mycon"].ConnectionString.ToString();
        SqlConnection con = new SqlConnection(str);

        SqlDataAdapter da = new SqlDataAdapter("select * from employee", con);
        DataSet ds = new DataSet();
        da.Fill(ds, "emp");
        XmlDataDocument doc = new XmlDataDocument(ds);
        doc.Save("d:\\files\\emp.xml");

        DataSet ds1 = new DataSet();
        ds1.ReadXml("d:\\files\\emp.xml");
        GridView1.DataSource = ds1.Tables[0];
        GridView1.DataBind();
    }
}