import java.util.*;

class AllFunc
{
	public static void main(String[]args)
	{
		StringBuffer a = new StringBuffer(args[0]);
		System.out.println("Length : "+a.length());
		System.out.println("Capacity : "+a.capacity());
		
		a.append(" <---- This is Your String") ;
		System.out.println("New String : "+a.toString());
		System.out.println("Length : "+a.length());
		System.out.println("Capacity : "+a.capacity());
		
		System.out.println("Setting Capacity to 100");
		a.ensureCapacity(100) ;
		System.out.println("Capacity : "+a.capacity());
		
		a.append(" <-------- Random Text For Appending Here -------->");
		System.out.println("New String : "+a.toString());
		System.out.println("Length : "+a.length());
		System.out.println("Capacity : "+a.capacity());
		
		a.reverse();
		System.out.println("Reverse : "+a.toString());
		a.reverse();
		
		a.delete(7,19) ;
		System.out.println("OMG Index 7 to 18 just got toasted : "+a.toString());
		
		a.deleteCharAt(6) ;
		System.out.println("The Poor Char at index 6 is long dead : "+a.toString());
		
		a.replace(2,8,"<--- This is my Area --->") ;
		System.out.println("Index 2 to 7 -_- : "+a.toString());
		
	}
}