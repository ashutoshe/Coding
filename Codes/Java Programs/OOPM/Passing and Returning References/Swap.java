class Swap
{
	private int x,y;
	
	public Swap(int x,int y)
	{
		this.x=x;
		this.y=y;
	}
	
	public void swap(Swap s)
	{
		int temp;
		temp=s.x;
		s.x=s.y;
		s.y=temp;
	}
	
	public void show()
	{
		System.out.print("\nX="+x);
		System.out.println(" Y="+y);
	}
}

class SwapDemo
{
	public static void main(String []args)
	{
		Swap s=new Swap(10,20);
		s.show();
		s.swap(s);
		s.show();
	}
}
