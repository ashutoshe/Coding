using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SampleApplication
{
    class Employee
    {
        public static void Main()
        {
            Employee obj = new Employee();
            obj.CalculateBonus();
        }

        public int calculateSalary()
        {
            int salary = 30000;
            int days = 27;
            int takehomesalary = (days*salary) / 30;
            return takehomesalary;
        }

        public void CalculateBonus()
        {
            int sal=calculateSalary();
            Console.WriteLine("This Month Salary is " + sal);
            int bonus = (sal * 7) / 100;
            Console.WriteLine("The Bonus is " + bonus);
            Console.WriteLine("Total Salary with Bonus is "+(sal+bonus));
        }
    }
}
