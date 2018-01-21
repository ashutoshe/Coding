import java.lang.* ;
import java.util.* ;

class DscSort
{
	public static void main(String args[])
	{
		int n,i,j,t ;
		Scanner s=new Scanner(System.in) ;
		System.out.print("\nEnter Number of Elements in Array ") ;
		n=s.nextInt() ;
		int[] a = new int[n] ;
		
		System.out.print("\nEnter the Elements\n\n") ;
		for(i=0;i<n;i++)
		{
			a[i]=s.nextInt() ;
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(a[j]<a[j+1])
				{
					t=a[j] ;
					a[j]=a[j+1] ;
					a[j+1]=t ;
				}
			}
		}
		
		System.out.print("\nThe Sorted Array is ") ;
		for(i=0;i<n;i++)
		{
			System.out.print(a[i]+" ") ;
		}
	}
}