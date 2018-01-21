import java.lang.* ;

class Thread1 extends Thread  
{         
	public void run()   
	{     
		int i;     
		for(i=1;i<=10;i++)          
			System.out.println(i);    
	} 
}

class Thread2 extends Thread  
{         
	public void run()   
	{     
		int i;     
		for(i=11;i<=20;i++)          
			System.out.println(i);    
	} 
}

class Thread3 implements Runnable
{         
	public void run()   
	{     
		int i;     
		for(i=21;i<=30;i++)          
			System.out.println(i);    
	} 
}

class ThreadExtends  
{
    public static void main(String args[])
    {
		Thread t1=new Thread1();
		t1.start();
		
		Thread t2=new Thread2();
		t2.start();
		
		Thread t3=new Thread(new Thread3());
		t3.start();
    } 
}
	