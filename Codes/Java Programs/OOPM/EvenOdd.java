import java.lang.* ;
import java.util.* ;


class EvenOdd 
{
	public static void main(String args[])
	{
		int n ;
		Scanner s = new Scanner(System.in) ;
		System.out.print("Enter a Number ") ;
		n=s.nextInt();
		
		if(n%2==0)
		{System.out.print("\nEven") ;}
	    else
		{System.out.print("\nOdd") ;}
	}
}