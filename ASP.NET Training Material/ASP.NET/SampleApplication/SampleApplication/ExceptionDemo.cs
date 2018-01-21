using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class ExceptionDemo
    {
        public static void Main()
        {
            try
            {
                //int a, b, c;
                //a = 10;
                //b = 0;
                //c = a / b;
                //Console.WriteLine(c);

                int[] arr = new int[5];
                for (int i = 0; i <arr.Length; i++)
                {
                    arr[i] = Convert.ToInt32(Console.ReadLine());
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {

            }
            Console.WriteLine("Hello");
        }
    }
}
