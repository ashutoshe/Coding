import java.util.*;
import java.math.*;

class Rectangle
{
	private double a,b,area,cir;

	public Rectangle(double x,double y)
	{
	a=x;
	b=y;
	}

	public void calcArea()
	{
	area=a*b;
	}
	
	public void calcCir()
	{
	cir=2*(a+b);	
	}
	
	public void show()
	{
	System.out.println("area="+area);
	System.out.println("circumference="+cir);
	}
}

class UseRectangle
{
	public static void main(String args[])
	{
	Scanner sc = new Scanner(System.in);
	double x,y;
	System.out.println("enter length and breadth");
	x=sc.nextDouble();
	y=sc.nextDouble();

	Rectangle r = new Rectangle(x,y);
	r.calcArea();
	r.calcCir();
	r.show();
	
	}
}