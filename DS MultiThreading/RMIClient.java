import java.rmi.*;
import java.util.*;

class RMIClient extends Thread
{
	int [][]a;
	int [][]b;
	String ch;
	
	public RMIClient(int [][]a,int [][]b,String ch)
	{
		this.a=a;
		this.b=b;
		this.ch=ch;
	}
	
	public void run()
	{
		int [][]res=new int[10][10];
		
		try
		{
			RMIInterface m =(RMIInterface) Naming.lookup("rmi://localhost/Mat");
			
			res=m.operation(this.a,this.b,this.ch);
			
			System.out.println("Result for "+this.ch);
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<10;j++)
				{
					System.out.print(" "+res[j][i]+" ");	/*check this j,i or i,j*/
				}
				System.out.println();
			}
		}
		catch(Exception e){System.out.println("Failed to Find");}
	}
	
	public static void main(String []args)
	{
		int [][]a=new int[10][10];
		int [][]b=new int[10][10];
		
		for(int i=0;i<10;i++)			/*Take Input if u want*/
		{
			for (int j=0;j<10;j++)
			{
				a[i][j]=i*j;
				b[i][j]=i+j;
			}
		}
		
		Thread add=new RMIClient(a,b,"add");
		Thread sub=new RMIClient(a,b,"sub");
		Thread mul=new RMIClient(a,b,"mul");
		Thread trans=new RMIClient(a,b,"trans");
		
		add.start();
		sub.start();
		mul.start();
		trans.start();
	}
}