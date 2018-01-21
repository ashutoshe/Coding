using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class FileUploadExample : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        if (FileUpload1.HasFile)
        {
            FileUpload1.SaveAs(Server.MapPath("~/Files/" + FileUpload1.FileName));
            Response.Write("File Uploaded Successfully");
        }
        else
        {
            Response.Write("Please Select File to Upload");
            FileUpload1.Focus();
        }
    }
}