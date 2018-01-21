using System;

namespace SampleApplication
{
    class LoopExample
    {
        public static void Main()
        {
            //int i = 2;
            //int sum = 0;
            //while (i <= 10)
            //{
               
            //    Console.WriteLine(i);
            //    sum = sum + i;
            //    i+=2;
            //}

            //Console.WriteLine("The sum is " + sum);

            //int i = 10;
            //do
            //{
            //    Console.WriteLine(i);
            //    i++;
            //}
            //while(i>10);

            //int i;
            //for (i = 1; i <= 10; i++) ;
            
            // Console.WriteLine(i);

            int i = 1;
            while(i<=10)
            {
                i++;
                if (i == 5)
                {
                    break;
                }
                Console.WriteLine(i);
            }

            myclass m = new myclass();
            
        }
    }
}
