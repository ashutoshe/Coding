import java.lang.* ;
import java.util.* ;

class Palindrome
{
	public static void main(String[] args)
	{
		int n,r=0,t ;
		Scanner s = new Scanner (System.in) ;
		
		System.out.print("\nEnter a Number ") ;
		n=s.nextInt() ;
		t=n ;
		
		while(t!=0)
		{
			r=r*10+t%10 ;
			t=t/10 ;
		}
		
		if(r==n)
		{
			System.out.println("\nPalindrome") ;
		}
		else
		{
			System.out.println("\nNot Palindrome") ;
		}
	}
}