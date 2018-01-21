import java.lang.* ;
import java.util.* ;

class Search
{
	public static void main(String args[])
	{
		int n,i,x ;
		Scanner s=new Scanner(System.in) ;
		System.out.print("\nEnter Number of Elements in Array ") ;
		n=s.nextInt() ;
		int[] a = new int[n] ;
		
		System.out.print("\nEnter the Elements ") ;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt() ;
		}
		
		System.out.print("\nEnter the Element to be Searched ") ;
		x=s.nextInt() ;
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				System.out.print("\nElement is at Index location " + i) ;
				break ;
			}
		}
		
		if(i==n)
		{
			System.out.print("\nElement not Found") ;
		}
		
		System.out.println() ;
	}
}