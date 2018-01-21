import java.lang.* ;
import java.util.* ;

class Pattern1121
{
	public static void main(String[] args)
	{
		int i,j,k,l,n;  
        Scanner s = new Scanner(System.in) ;
        System.out.print("\nEnter number of rows ");
        n=s.nextInt() ;
		
        for(i=1;i<=n;i++)  
        {  
            for(j=1;j<=n-i;j++)  
			{  
				System.out.print(" ");  
			}  
			
			for(k=1;k<=i;k++)  
			{  
				System.out.print(k);  
			}  
		
			for(l=i-1;l>=1;l--)  
			{  
				System.out.print(l);  
			}  
		
			System.out.print("\n");  

		}
	}
}