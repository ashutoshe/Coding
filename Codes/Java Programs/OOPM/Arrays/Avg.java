import java.lang.* ;
import java.util.* ;

class Avg
{
	public static void main(String args[])
	{
		int n,i,sum=0 ;
		float avg ;
		Scanner s=new Scanner(System.in) ;
		System.out.print("\nEnter Number of Elements in Array ") ;
		n=s.nextInt() ;
		int[] a = new int[n] ;
		
		System.out.print("\nEnter the Elements ") ;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt() ;
			sum=sum+a[i] ;
		}
		
		avg=(float)sum/n ;
		
		System.out.print("\nAverage = "+avg+"\n") ;
	}
}