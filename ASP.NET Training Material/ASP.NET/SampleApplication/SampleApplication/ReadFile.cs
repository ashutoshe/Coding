using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace SampleApplication
{
    class ReadFile
    {
        public static void Main()
        {
            FileStream fs = new FileStream("d:\\files\\myfile.txt", FileMode.Open, FileAccess.Read);
            StreamReader sr = new StreamReader(fs);
            string str = sr.ReadToEnd();
            Console.WriteLine(str);
            sr.Close();
            fs.Close();
        }
    }
}
