import java.util.* ;

class StrPal
{
	public static void main(String[]args)
	{
		int i,n ;
		n=args[0].length() ;
		char[]c =new char[n] ;
		c=args[0].toCharArray() ;
		
		for(i=0;i<n;i++)
		{
			if(c[i]!=c[n-1-i])
			{
				System.out.print("\nNot A Palindrome\n") ;
				System.exit(1) ;
			}
		}
		
		System.out.print("\nPalindrome\n") ;
	}
}