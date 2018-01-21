import java.util.*;

class Student
{
	private int roll;
	private String name;
	private char grade;

	public Student(int i,String s,char g)
	{
	roll=i;
	name=s;
	grade=g;
	}

	public void show()
	{
	System.out.println(roll+"\n"+name+"\n"+grade);
	}
}

class UseStudent
{
	public static void main(String []args)
	{
	Scanner sc=new Scanner(System.in);
	
	int n;
	System.out.println("enter no of objects:");
	n=sc.nextInt();
	Student a[]=new Student[n];
	String s=new String();
	
	for(int i=0;i<a.length;i++)
	{
	System.out.println("enter roll name and grade of obj"+(i+1));
	int id=sc.nextInt();
	s=sc.next();
	char g=sc.next().charAt(0);
	
	a[i]=new Student(id,s,g);
	}
	
	for(int i=0;i<a.length;i++)
	a[i].show();
	
	}
}