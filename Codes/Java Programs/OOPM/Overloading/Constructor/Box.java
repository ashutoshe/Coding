import java.lang.* ;
import java.util.* ;
import java.math.* ;

class Box
{
	private int l;
	private int b;
	private int h;
	
	public Box()
	{
		Scanner sc =new Scanner(System.in);
		l=sc.nextInt();
		b=sc.nextInt();
		h=sc.nextInt();
	}
	
	public Box(int s)
	{
		l=b=h=s;
	}
	
	public Box(int i,int j,int k)
	{
		l=i;
		b=j;
		h=k;
	}
	
	public Box(Box p)
	{
		l=p.l;
		b=p.b;
		h=p.h;
	}
	
	public void show()
	{
		System.out.println("Lenght = "+l+" Breadth = "+b+" and Height = "+h);
	}
}

class UseBox
{
	public static void main(String []args)
	{
		Box b1,b2,b3,b4;
		b1=new Box();
		b2=new Box(15);
		b3=new Box(5,10,15);
		b4=new Box(b3);
		b1.show();
		b2.show();
		b3.show();
		b4.show();
	}
}