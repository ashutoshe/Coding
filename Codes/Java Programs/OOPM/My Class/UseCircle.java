import java.util.*;
import java.math.*;

class Circle
{
	private double r,area,cir;

	public Circle(double rad)
	{
	r=rad;
	}

	public void calcArea()
	{
	area=Math.PI*r*r;
	}
	
	public void calcCir()
	{
	cir=2*Math.PI*r;	
	}
	
	public void show()
	{
	System.out.println("area="+area);
	System.out.println("circumference="+cir);
	}
}

class UseCircle
{
	public static void main(String args[])
	{
	Scanner sc = new Scanner(System.in);
	double rad;
	System.out.println("enter radius");
	rad=sc.nextDouble();

	Circle c = new Circle(rad);
	c.calcArea();
	c.calcCir();
	c.show();
	
	}
}