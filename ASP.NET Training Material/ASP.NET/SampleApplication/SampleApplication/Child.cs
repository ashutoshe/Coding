using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class Child:parent
    {
        public static void Main()
        {
            Child c = new Child();
            c.mymethod();
        }

        public void mymethod()
        {
            base.mymethod();
            Console.WriteLine("This is child class method");
        }
    }

    class parent
    {
        public void mymethod()
        {
            Console.WriteLine("This is parent class method");
        }
    }

}
