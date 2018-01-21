class Box
{
	private int l,b,h;
	
	public Box(int l,int b,int h)
	{
		this.l=l;
		this.b=b;
		this.h=h;
		this.show();
	}
	
	public void show()
	{
		System.out.println("\nLength = "+l);
		System.out.println("Breadth = "+b);
		System.out.println("Height = "+h);
	}
}

class UseBox
{
	public static void main(String []args)
	{
		Box b=new Box(5,10,15);
	}
}
