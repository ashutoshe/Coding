using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class VariableExample
    {
        public int i;
        public static void Main()
        {
            VariableExample obj = new VariableExample(5);
            obj.add();
            obj.display();

            VariableExample obj1 = new VariableExample();
            obj1.add();
            obj1.display();

            obj.display();
        }

        ~VariableExample()
        {
            Console.WriteLine("This is destructor");
        }

        public VariableExample()
        {
            Console.WriteLine("This is instance constructor");
        }

        public VariableExample(int i)
        {
            Console.WriteLine("This is parameterised Constructor");
        }

        static VariableExample()
        {
            Console.WriteLine("This is static constructor");
        }
        public void add()
        {
            i++;
        }
        public void display()
        {
            Console.WriteLine(i);
        }

      
    }
}
