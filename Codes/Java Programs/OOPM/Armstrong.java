import java.lang.* ;
import java.util.* ;

class Armstrong
{
	public static void main(String args[])
	{
		int n,t,cs=0 ;
		Scanner s = new Scanner(System.in) ;
		System.out.print("\nEnter a Number ") ;
		n=s.nextInt() ;
		t=n ;
		
		while (t!=0)
		{
			cs=cs+(t%10)*(t%10)*(t%10) ;
			t=t/10 ;
		}
	    
		if(cs==n)
		{
			System.out.print("\nArmstrong\n") ;
		}
		else
		{
			System.out.print("\nNot Armstrong\n") ;
		}
	}
}