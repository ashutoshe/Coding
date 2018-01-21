using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class StudentMarksheet
    {
        public static void Main()
        {
            int[,] arr = new int[3, 4];
            for (int r = 0; r < 3; r++)
            {
                Console.WriteLine("Please Enter Roll Number");
                arr[r, 0] = Convert.ToInt32(Console.ReadLine());

                for (int c = 1; c < 4; c++)
                {
                    Console.WriteLine("Please Enter Marks for Subject "+c);
                    arr[r, c] = Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("Roll No Sub1 Sub2 Sub3 Total Percentage");

            
            for (int r = 0; r < 3; r++)
            {
                int total = 0, percentage = 0;
                Console.Write(arr[r, 0]+"         ");
                for (int c = 1; c < 4; c++)
                {
                    Console.Write(arr[r, c]+"   ");
                    total = total + arr[r, c];
                }
                Console.Write(total + "        ");
                percentage = total / 3;
                Console.Write(percentage + "         ");
                Console.WriteLine();
            }

        }
    }
}
