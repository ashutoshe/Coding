import java.lang.* ;
import java.util.* ;

class Reverse
{
	public static void main(String[] args)
	{
		int n,r=0 ;
		Scanner s = new Scanner (System.in) ;
		
		System.out.print("\nEnter a Number ") ;
		n=s.nextInt() ;
		
		while(n!=0)
		{
			r=r*10+n%10 ;
			n=n/10 ;
		}
		
		System.out.println("\nThe Reverse is "+r) ;
	}
}