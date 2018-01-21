class Pause
{
	public static void main(String []args)
	{
		try
		{
			Thread.sleep(10000);                 //wait for 10 sec
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("\nYou just wasted 10 secs");
		}
	}
}
