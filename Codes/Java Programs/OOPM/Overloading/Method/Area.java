import java.lang.* ;
import java.util.* ;
import java.math.* ;

class Area
{
	public double area(double r)
	{
		return(3.14*r*r);
	}
	
	public double area(double l,double b)
	{
		return(l*b);
	}
	
	public double area(double a,double b,double c)
	{
		
		double s=(a+b+c)/2;
		s=s*(s-a)*(s-b)*(s-c);
		return(Math.sqrt(s));
	}
}

class UseArea
{
	public static void main(String []args)
	{
		Area a =new Area();
		System.out.println("Area of Circle = "+a.area(10));
		System.out.println("Area of Rectangle = "+a.area(10,10));
		System.out.println("Area of Triangle = "+a.area(10,10,10));
	}
}