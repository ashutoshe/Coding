import java.util.*;

class StrAllFunc
{
	  public static void main(String []args)
	  {
		Scanner s =new Scanner (System.in);
		
		String a = args[0] ;
		String b = args[1] ;
		System.out.println("Length : "+a.length());
		System.out.println("Char At 0 : "+a.charAt(0));
		System.out.println("Equals : "+a.equals(b));
		System.out.println("Equals Ignore Case : "+a.equalsIgnoreCase(b));
		System.out.println("Compare : "+a.compareTo(b));
		System.out.println("Compare Ignore Case : "+a.compareToIgnoreCase(b));
		System.out.println("Upper Case : "+a.toUpperCase());
		System.out.println("Lower Case : "+a.toLowerCase());
		System.out.print("Enter Char to Search in a and b : ");
		char ch = s.next().charAt(0);
		System.out.println(a.indexOf(ch));
		System.out.println(b.indexOf(ch));
		System.out.print("Enter String to Search : ");
		String c = s.next();
		System.out.println(a.indexOf(c));
		System.out.println(b.indexOf(c));
		System.out.print("Enter String to check Start : ");
		String d = s.next();
		System.out.println(a.startsWith(d));
		System.out.println(b.startsWith(d));
		System.out.print("Enter String to search and starting index : ");
		String e = s.next();
		int i = s.nextInt();
		System.out.println(a.startsWith(e,i));
		System.out.println(b.startsWith(e,i));
		System.out.print("Enter String to Check End : ");
		String f = s.next();
		System.out.println(a.endsWith(f));
		System.out.println(b.endsWith(f));
		System.out.print("Enter starting and ending index of Substring of First String : ");
		int j = s.nextInt();
		int k = s.nextInt();
		System.out.println(a.substring(j,k));
		System.out.print("Enter the starting index of substring for b : ");
		int l = s.nextInt();
		System.out.println(b.substring(l));
		System.out.print("Enter a char or String to check last occurance : ");
		String g = s.next();
		System.out.println(a.lastIndexOf(g));
		System.out.println(b.lastIndexOf(g));
		System.out.println("Concat : "+a.concat(b)); 
	  } 
}