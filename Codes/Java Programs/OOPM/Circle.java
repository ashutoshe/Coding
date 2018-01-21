import java.lang.* ;
import java.util.* ;

class Circle 
{
public static void main (String Args[])
{
float r,A ;
Scanner sc = new Scanner(System.in) ;
System.out.print("\nRadius = ") ; 
r=sc.nextFloat() ;
A=3.14f*r*r ;
System.out.println("\nArea = " + A) ;
}
}
