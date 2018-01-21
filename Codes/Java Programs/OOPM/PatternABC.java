import java.lang.* ;
import java.util.* ;

class PatternABC
{
	public static void main(String[] args)
	{
		int i=1,n,t;
		char j=65 ;
		Scanner s = new Scanner(System.in) ;
        System.out.print("\nEnter the value of n : ");
        n=s.nextInt();
		
		while(n!=0)
		{
			t=i ;
			while(t!=0)
			{
				System.out.print(j) ;
				j++ ;
				t-- ;
			}
			
			System.out.println() ;
			i++ ;
			t=i ;
			n-- ;
		}
	}
}