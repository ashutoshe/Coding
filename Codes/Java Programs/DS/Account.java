class Transaction extends Thread
{
   private static int balance=1000;
   Account acc;
   
   public Transaction(Account acc,String s)
   {
	  super(s);
	  this.acc=acc;
		System.out.println("Initial Balance="+balance);		  
   }
  
   public void run()
   { int i;
	   synchronized(acc)
	   {
		   try
			{
			
				for(i=0;i<5;i++)
				{			
					if(Thread.currentThread().getName().equals("one"))
						{ 
							withdraw();
							//Thread.sleep(30000);
						}
					
					if(Thread.currentThread().getName().equals("two"))
						{
							deposit();
							//Thread.sleep(1000);
						}
				}
			}
		 
			catch(Exception e){}
	   }
   }
   
   public void withdraw()
   {
	balance-=100;
	System.out.println("In withdraw;Balance="+balance);
   }
   public void deposit()
   {
	balance+=100;
	System.out.println("In deposit;Balance="+balance);
   }
}

class Account 
{
	public static void main(String []args)
	{
		
	Account acc=new Account();
	Thread t1=new Transaction(acc,"one");
	Thread t2=new Transaction(acc,"two");
	t2.start();
	t1.start();
	}
}