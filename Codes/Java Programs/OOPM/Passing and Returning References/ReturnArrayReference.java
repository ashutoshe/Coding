class Demo
{
	public int[] createArray(int n)
	{
		int []brr =new int [n];
		return brr;
	}
}

class Test
{
	public static void main(String []args)
	{
		Demo d = new Demo();
		int []arr =d.createArray(5);
		System.out.println("\nLength of Array is "+arr.length);
	}
}
