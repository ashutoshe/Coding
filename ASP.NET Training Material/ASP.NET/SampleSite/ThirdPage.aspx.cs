using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class ThirdPage : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        //string str = null;
        //for(int i=0;i<ListBox1.Items.Count;i++)
        //{
        //    if (ListBox1.Items[i].Selected == true)
        //    {
        //        str = str + ListBox1.Items[i].Text.ToString() + "<br>";
        //    }
        //}

        //Label1.Text = str;


        string str = null;
        for (int i = 0; i < CheckBoxList1.Items.Count; i++)
        {
            if (CheckBoxList1.Items[i].Selected == true)
            {
                str = str + CheckBoxList1.Items[i].Text.ToString() + "<br>";
            }
        }

        Label1.Text = str;
    }
}