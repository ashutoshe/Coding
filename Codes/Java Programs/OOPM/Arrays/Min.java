import java.lang.* ;
import java.util.* ;

class Min
{
	public static void main(String args[])
	{
		int n,i,min ;
		Scanner s=new Scanner(System.in) ;
		System.out.print("\nEnter Number of Elements in Array ") ;
		n=s.nextInt() ;
		int[] a = new int[n] ;
		
		System.out.print("\nEnter the Elements ") ;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt() ;
		}
		
		min=a[0] ;
		for(i=0;i<n;i++)
		{
			if (a[i]<min)
				min=a[i] ;
		}
		
		
		System.out.print("\nMinimum = "+min+"\n") ;
	}
}