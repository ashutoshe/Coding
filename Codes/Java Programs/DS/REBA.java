import java.util.*;
import java.util.concurrent.locks.*;

class Transaction extends Thread
{
	Account a;
	private static int balance=200;
	static int i;
	
	final static Lock lock = new ReentrantLock();
	final static Condition withdraw=lock.newCondition();
	final static Condition deposit=lock.newCondition();
	
	public Transaction(Account a,String n)
	{
		super(n);
		this.a=a;
	}
		
	public void run()
	{
		for(i=0;i<20;i++)
		{
			try
			{
				lock.lock();
				if(Thread.currentThread().getName()=="1")
				{
					if(balance<=100)
					{
						System.out.println("................waiting!!");
						withdraw.await();
						System.out.println("................Receiving Signal");
						
					}
					else
					{
						withdraw();
						deposit.signal();
					}
				}
				if(Thread.currentThread().getName()=="2")
				{
					deposit();
					withdraw.signal();
					Thread.sleep(100);
		
				}
				
				this.print();
			}
			catch(InterruptedException iex){}
			finally
			{
				lock.unlock();
			}
		}
		
	}	
	
	public void withdraw()
	{
		balance-=100;
		System.out.println("Withdrawing Rs 100");
	}
	public void deposit()
	{
		balance+=100;
		System.out.println("Depositing Rs 100");
	}
	void print()
	{
		System.out.println("Balance is "+balance);
	}
}

class Account
{
	public static void main(String []args)
	{
		Account a =new Account();
		
		Thread t1=new Transaction(a,"1");
		Thread t2=new Transaction(a,"2");
		t1.start();
		t2.start();
	}
}