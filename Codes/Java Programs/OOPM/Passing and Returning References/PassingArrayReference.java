class Demo
{
	public void doubler(int []b)
	{
		for(int i=0;i<b.length;i++)
			b[i]=b[i]*2;
	}
}

class Test
{
	public static void main(String []args)
	{
		Demo d = new Demo();
		int []a={10,20,30,40,50};

		d.doubler(a);
		
		System.out.println();
		for(int i=0;i<a.length;i++)
			System.out.print(a[i]+" ");
		System.out.println();
	}
}
