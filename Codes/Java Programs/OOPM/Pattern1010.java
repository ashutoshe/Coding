import java.lang.* ;
import java.util.* ;

class Pattern1010
{
	public static void main(String[] args)
	{
		int i,j,n;
		Scanner s = new Scanner(System.in) ;
        System.out.print("\nEnter the value of n : ");
        n=s.nextInt();
        for(i=0;i<=n;i++)
        {
            for(j=1;j<i;j++)
            {
                if((i+j)%2==0)
                {
                    System.out.print("0");
                }
            else
            {
                System.out.print("1");
            }  
            }
        System.out.print("\n");
        }
	}
}