using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class OverloadingExample
    {
        public static void Main()
        {
            OverloadingExample obj = new OverloadingExample();
            
        }

        public void display(int a, int b)
        {

        }

        public void display(float a, int b)
        {

        }
    }
}
