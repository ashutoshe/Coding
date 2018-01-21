import java.lang.* ;
import java.util.* ;

class AllArmstrong
{
	protected void armstrong(int x)
	{
		int cs=0,t ;
		t=x ;
		
		while (t!=0)
		{
			cs=cs+(t%10)*(t%10)*(t%10) ;
			t=t/10 ;
		}
	    
		if(cs==x)
		{
			System.out.print(x+" ") ;
		}
	}
	
	public static void main(String args[])
	{
		int n,i ;
		Scanner s = new Scanner(System.in) ;
		System.out.print("\nDisplay 3 Digit Armstrong Numbers Until  ") ;
		n=s.nextInt() ;
		AllArmstrong a= new AllArmstrong() ;
		
		for(i=100;i<=n;i++)
		{
			a.armstrong(i) ;
		}
		
	}
}