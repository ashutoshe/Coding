import java.lang.* ;
import java.util.* ;

class Calculator
{
	public static void main(String[] args)
	{
		int a,b,c=0,n ;
		Scanner s = new Scanner(System.in) ;
		
		System.out.print("\nEnter 2 Numbers ") ;
		a=s.nextInt(); 
		b=s.nextInt(); 
		
		System.out.print("\nEnter 1 for Addition,2 for Subtraction,3 for Multiplication or 4 for Division ") ;
		n=s.nextInt();
		
		switch(n)
		{
			case 1 : c=a+b ;
					 break ;
			case 2 : c=a-b ;
					 break ;
			case 3 : c=a*b ;
					 break ;
			case 4 : c=a/b ;
					 break ;
			default : System.out.print("Invalid Choice\n") ;
					  System.exit(1) ; 
			
		}
		
		System.out.print("\nAnswer = " + c + "\n") ;
	}
}