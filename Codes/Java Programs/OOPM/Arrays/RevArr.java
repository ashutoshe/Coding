import java.lang.* ;
import java.util.* ;

class RevArr
{
	public static void main(String args[])
	{
		int n,i,t ;
		Scanner s=new Scanner(System.in) ;
		System.out.print("\nEnter Number of Elements in Array ") ;
		n=s.nextInt() ;
		int[] a = new int[n] ;
		
		System.out.print("\nEnter the Elements ") ;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt() ;
		}
		
		for(i=0;i<(n/2);i++)
		{
			t=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=t ;
		}
		
		System.out.print("\nThe Elements are ") ;
		for(i=0;i<n;i++)
		{
			System.out.print(a[i]+" ") ;
		}
		
		System.out.println() ;
	}
}