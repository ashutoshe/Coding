using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using ClassLibrary1;

namespace SampleApplication
{
    class sample : Class1
    {
        public static void Main()
        {
            
            myclass m = new myclass();
            sample s = new sample();
            Class1 c = new Class1();
            
        }
    }

    class myclass
    {
        public void publicmethod()
        {
        }
        void privatemethod()
        {
        }

        protected void protectedmethod()
        {
        }

        internal void internalmethod()
        {
        }
    }
}
