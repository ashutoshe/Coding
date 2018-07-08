import java.rmi.*;
import java.rmi.server.*;
import java.util.*;

public class RMIServer extends UnicastRemoteObject implements RMIInterface
{
	int [][]a;
	int [][]b;
	String ch;
	
	public RMIServer() throws RemoteException
	{
		super();
	}
	
	public int[][] operation(int [][]a,int [][]b,String ch)
	{
		if(ch.equals("add"))
			return this.add(a,b);
		if(ch.equals("sub"))
			return this.sub(a,b);
		if(ch.equals("mul"))
			return this.mul(a,b);
		if(ch.equals("trans"))
			return this.trans(a,b);
		return null;
	}
	
	public int[][] add(int [][]a,int [][]b)
	{
		int [][]res=new int[10][10];
		
		/*Logic Here*/
		
		return res;
	}
	
	public int[][] sub(int [][]a,int [][]b)
	{
		int [][]res=new int[10][10];
		
		/*Logic Here*/
		
		return res;
	}
	
	public int[][] mul(int [][]a,int [][]b)
	{
		int [][]res=new int[10][10];
		
		/*Logic Here*/
		
		return res;
	}
	
	public int[][] trans(int [][]a,int [][]b)
	{
		int [][]res=new int[10][10];
		
		/*Logic Here*/
		
		return res;
	}
	
	public static void main(String []args)
	{
		try
		{
			RMIServer x = new RMIServer();
			Naming.rebind("Mat",x);
		}
		catch(Exception e){System.out.println("Failed to Bind");}
	}
}