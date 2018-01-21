import java.util.*;

class Account
{
	private int id;
	private String name;
	private double bal;

	public Account(int i,String s,double b)
	{
	id=i;
	name=s;
	bal=b;
	}

	public void show()
	{
	System.out.println(id+"\n"+name+"\n"+bal);
	}
}

class UseAccount
{
	public static void main(String []args)
	{
	Scanner sc=new Scanner(System.in);
	
	int n;
	System.out.println("enter no of objects:");
	n=sc.nextInt();
	Account a[]=new Account[n];
	String s=new String();
	
	for(int i=0;i<a.length;i++)
	{
	System.out.println("enter id name and balance of obj"+(i+1));
	int id=sc.nextInt();
	s=sc.next();
	double b=sc.nextDouble();
	
	a[i]=new Account(id,s,b);
	}
	
	for(int i=0;i<a.length;i++)
	a[i].show();
	
	}
}