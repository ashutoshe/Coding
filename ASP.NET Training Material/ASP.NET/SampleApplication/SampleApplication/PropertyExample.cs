using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class PropertyExample
    {
        public int CustomerAge
        {
            get;
            set;
        }
    }

    class properties
    {
        public static void Main()
        {
            PropertyExample obj = new PropertyExample();
            obj.CustomerAge = 20;
            Console.WriteLine(obj.CustomerAge);
        }
    }
}
