import java.util.*;

class Student
{
	private int roll;
	private String name;
	private float maths;
	private float science;
	private float comps,total,perc;

	public Student(int i,String s,float m,float sci, float c)
	{
	roll=i;
	name=s;
	maths=m;
	science=sci;
	comps=c;
	}
	
	public void calculate()
	{
		total=maths+science+comps;
		perc=(total/300)*100;
	}

	public void show()
	{
	
	System.out.println(roll +"\t"+ name +"\t "+ maths+"\t   "+ science +"\t   \t "+ comps +"\t  "+ total +"  "+ perc);
	}
}

class UseStudent1
{
	public static void main(String []args)
	{
	Scanner sc=new Scanner(System.in);
	
	int n,roll; float m,sci,c;
	System.out.println("enter no of objects:");
	n=sc.nextInt();
	Student a[]=new Student[n];
	String s=new String();
	
	for(int i=0;i<a.length;i++)
	{
	System.out.println("enter details of student"+(i+1));
	System.out.println("enter roll"); 
	roll=sc.nextInt();
	System.out.println("enter name");
	s=sc.next();
	System.out.println("enter marks of maths science and comps");
	m=sc.nextFloat();
	sci=sc.nextFloat();
	c=sc.nextFloat();
	
	a[i]=new Student(roll,s,m,sci,c);
	a[i].calculate();
	}
	System.out.println("roll \t name \t maths \t science \t comps \t total \t percentage ");
	for(int i=0;i<a.length;i++)
	a[i].show();
	
	}
}