using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class ArrayExample
    {
        public static void Main()
        {
            int[] arr = new int[5];
            Console.WriteLine("Please Enter Five Numbers");
            for (int i = 0; i < 5;i++ )
            {
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }

            Console.WriteLine();
            Console.WriteLine("Five Numbers are as follows");
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(arr[i]);
                sum = sum + arr[i];
            }

            Console.WriteLine();
            Console.WriteLine("The sum of Elements is " + sum);

            int max = arr[0];
            for (int i = 1; i < 5; i++)
            {
                if (arr[i]>max)
                {
                    max = arr[i];
                }
            }

            Console.WriteLine();
            Console.WriteLine("Maximum is " + max);
        }
    }
}
