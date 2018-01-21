import java.lang.* ;
import java.util.* ;

class Swap
{
public static void main (String Args[])
{
int a,b,t ;
Scanner sc = new Scanner(System.in) ;
System.out.print("\nNumber 1 = ") ; 
a=sc.nextInt() ;
System.out.print("Number 2 = ") ; 
b=sc.nextInt() ;
t=a ;
a=b ;
b=t ;
System.out.println("\nNumber 1 = " + a + "\nNumber 2 = " + b ) ;
}
}