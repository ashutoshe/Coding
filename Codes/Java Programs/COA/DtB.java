import java.util.* ;
import java.lang.* ;

class DtB
{
	public static void main(String []args)
	{
		int ch,n,c=0;
		char cha ;
		int []a=new int[100];
		
		Scanner sc=new Scanner(System.in);
		System.out.print("\n\n1.Number\n2.Character\n3.Exit\n\nEnter Your Choice : ");
		ch=sc.nextInt();
		
		switch(ch)
		{
			case 1: System.out.print("Enter Integer : ");
					n=sc.nextInt();
			
					while(n!=0)
					{
						a[c++]=n%2;
						n=n/2;	
					}
					System.out.print("\nThe Binary Is : ");
					c--;
					while(c>=0)
					{
						System.out.print(a[c--]);
					}
					break;
					
			case 2: System.out.print("Enter a character : ");
					cha=sc.next().charAt(0);
					
					n=(int)cha;
					System.out.print("\nIts ASCII value is : "+n);
					
					while(n!=0)
					{
						a[c++]=n%2;
						n=n/2;
					}
					System.out.print("\nThe Binary Is : ");
					c--;
					while(c>=0)
					{
						System.out.print(a[c--]);
					}
					break;
					
			case 3: System.exit(0);
					break;
					
			default:System.out.print("\nInvalid Input\n\n");
					DtB.main(null);
					break;
		}
		DtB.main(null);
	}
}