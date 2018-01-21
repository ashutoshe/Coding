class Rectangle
{
	private int l,b;
	
	public Rectangle(int l,int b)
	{
		this.l=l;
		this.b=b;
	}
	
	public Rectangle getRectangleObject()
	{
		Rectangle r = new Rectangle(10,20);
		return r;
	}
	
	public void show()
	{
		System.out.println("\nLength = "+l);
		System.out.println("Breadth = "+b);
	}
}

class UseRectangle
{
	public static void main(String []args)
	{
		Rectangle r1 = new Rectangle(40,50);
		r1.show();
		
		Rectangle r2= r1.getRectangleObject();
		r2.show();
	}
}
