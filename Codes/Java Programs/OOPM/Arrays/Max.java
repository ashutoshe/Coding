import java.lang.* ;
import java.util.* ;

class Max
{
	public static void main(String args[])
	{
		int n,i,max ;
		Scanner s=new Scanner(System.in) ;
		System.out.print("\nEnter Number of Elements in Array ") ;
		n=s.nextInt() ;
		int[] a = new int[n] ;
		
		System.out.print("\nEnter the Elements ") ;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt() ;
		}
		
		max=a[0] ;
		for(i=0;i<n;i++)
		{
			if (a[i]>max)
				max=a[i] ;
		}
		
		
		System.out.print("\nMaximum = "+max+"\n") ;
	}
}