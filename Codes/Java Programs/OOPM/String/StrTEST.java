import java.util.* ;

class StrTEST
{
	public static void main(String[]args)
	{
		int i,n ;
		n=args[0].length() ;     		//length function
		char[]c =new char[n] ;
		c=args[0].toCharArray() ;		//toCharArray function
		String s1=args[0].toUpperCase() ; //toUpperCase function
		String s2=args[0].toLowerCase() ;  //toLowerCase function
		
		System.out.print("\n"+s1+"\t"+s2) ;
		System.out.print("\n"+s1.equals(s2)) ; 					//equals function
		System.out.print("\n"+s1.equalsIgnoreCase(s2)) ; 		//equalsIgnoreCase function
	}
}