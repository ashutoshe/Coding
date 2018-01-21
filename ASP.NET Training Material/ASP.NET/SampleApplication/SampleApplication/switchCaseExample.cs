using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class switchCaseExample
    {
        public static void Main()
        {
            int days = 2;
            char c = Convert.ToChar(Console.ReadLine());
            switch (c)
            {
                case 'a':
                    Console.WriteLine("Monday");
                    break;

                case 'e':
                    Console.WriteLine("Tuesday");
                    break;
               
                default:
                    Console.WriteLine("Invalid Day");
                    break;
            }
        }
        
    }
}
