using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class Student
    {
        public static void Main()
        {
            
            Student ajay = new Student();
            //ajay.study();
            study();
            Student.study();
            SampleApplication.Student.study();
            System.Console.WriteLine("Hello");
        }

        public static void study()
        {
            System.Console.WriteLine("I am Studying");
        }
    }
}
