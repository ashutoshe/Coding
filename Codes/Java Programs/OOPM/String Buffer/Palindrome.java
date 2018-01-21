import java.util.*;

class Palindrome
{
	public static void main(String[]args)
	{
		StringBuffer sb = new StringBuffer();
		sb.append(args[0]);
		sb.reverse();
		String rev=sb.toString();
		
		if(args[0].equalsIgnoreCase(rev)==true)
			System.out.print("Palindrome\n") ;
		else
			System.out.print("Not Palindrome\n") ;
	}
}