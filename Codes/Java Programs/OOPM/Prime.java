import java.lang.* ;
import java.util.* ;

class Prime
{
	public static void main(String args[])
	{
		int n,i ;
		Scanner s= new Scanner(System.in) ;
		System.out.print("\nEnter 0 to exit\nEnter a Number ") ;
		n=s.nextInt();
		
		System.exit(n==0) ; 
		
		for (i=2;i<n;i++)
		{
			if(n%i==0)
			{
				break ;
			}
		}
		
		if (i==n)
		{
			System.out.print("\nPrime\n") ;
			main(null) ;
		}
		else
		{
			System.out.print("\nNot Prime\n")	;	
			main(null) ;
		}
	}
}