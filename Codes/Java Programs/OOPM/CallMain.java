import java.lang.* ;
import java.util.* ;

class A
{
	public static void main(String args[])
	{
		System.out.println("Class A was run") ;
	}
}

class B
{
	public static void main(String args[])
	{
		System.out.println("Class B was run") ;
		A.main(null) ;
	}
}