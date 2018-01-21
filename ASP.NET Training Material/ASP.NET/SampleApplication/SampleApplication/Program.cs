using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class Program
    {
        static void Main()
        {
            Program p = new Program();
            int x=p.add();
            x = x + 10;
            Console.WriteLine("The value of x is " + x);
        }

        public int add()
        {
            int a, b;
            a =Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("The addition is " + (a + b));
            return a+b;
        }
    }
}
