import java.lang.* ;
import java.util.* ;

class Rectangle 
{
public static void main (String Args[])
{
float l,b,A ;
Scanner sc = new Scanner(System.in) ;
System.out.print("\nLength = ") ; 
l=sc.nextFloat() ;
System.out.print("Breadth = ") ; 
b=sc.nextFloat() ;
A=l*b ;
System.out.println("\nArea = " + A) ;
}
}
