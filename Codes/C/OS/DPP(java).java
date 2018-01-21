import java.util.*;

class DPP implements Runnable
{
	static int []phi=new int[5];
	static int []fork=new int[5];
	static int no;
	
	public void run()
	{
		int i=no;
		no++;
		while(true)
		{
			try
			{
				Thread.sleep(2000);
			}
			catch(InterruptedException ex)
			{
				Thread.currentThread().interrupt();
			}
			
			if((phi[i]==0) && (fork[(i+1)%5]==0) && (fork[i]==0))
			{
				phi[i]=1;
				fork[i]=1;
				fork[(i+1)%5]=1;
				System.out.print("\nPhilosopher "+(i+1)+" is Eating");
				try
				{
					Thread.sleep(1000);
				}
				catch(InterruptedException ex)
				{
					Thread.currentThread().interrupt();
				}
			}
			else if(phi[i]==1)
			{
				fork[i]=0;
				fork[(i+1)%5]=0;
				phi[i]=0;
				System.out.print("\nPhilosopher "+(i+1)+" is done Eating");
				try
				{
					Thread.sleep(1000);
				}
				catch(InterruptedException ex)
				{
					Thread.currentThread().interrupt();
				}
				System.out.print("\nFork not Available for Philosopher "+(i+1));
			}
		}
	}

	public static void main(String []args)
	{
		Thread []tid=new Thread[5];
		
		for(int k=0;k<5;k++)
		{	
			tid[k]=new Thread(new DPP());
			tid[k].start();
		}
	}
}