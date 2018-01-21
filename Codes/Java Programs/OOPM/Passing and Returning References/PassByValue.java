class Demo
{
	public void increment(int x,int y)
	{
		x++;
		y++;
	}
}

class Test
{
	public static void main(String []args)
	{
		Demo d=new Demo();
		int x=10,y=20;
		System.out.print("\nBefore x = "+x+" and y = "+y);
		d.increment(x,y);
		System.out.println("\nAfter x = "+x+" and y = "+y);
	}
}