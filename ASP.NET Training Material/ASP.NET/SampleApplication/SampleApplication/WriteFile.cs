using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace SampleApplication
{
    class WriteFile
    {
        public static void Main()
        {
            FileStream fs = new FileStream("d:\\files\\myfile.txt", FileMode.Truncate, FileAccess.Write);
            Console.WriteLine("Enter Data");
            string str = Console.ReadLine();

            StreamWriter sw = new StreamWriter(fs);
            sw.WriteLine(str);
            sw.Close();
            fs.Close();
        }
    }
}
