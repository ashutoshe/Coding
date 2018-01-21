import java.util.* ;

class IEEE754SP
{
	public static void main(String[]args)
	{
		int []a =new int[32];
		int[]op=new int[8];
		char[] z=new char[8];
		int c=8,cop=0,exp=126;  //this is correct exp value
		
		System.out.print("Enter a Number : ");
		Scanner sc=new Scanner(System.in);
		float n=sc.nextFloat();
		
		if(n<0)
		{
			a[0]=1;
			n=n*(-1);
		}
		else 
			a[0]=0;
		
		int x=(int)n;
		while(x!=0)
		{
			x=x/2;
			exp++;
		}
		
		x=exp;
		while(c!=0)
		{
			a[c--]=x%2;
			x=x/2;
		}
		
		x=(int)n ;
		float m=n-x;
		c=9;
		
		exp=exp-127;
		while(exp!=0 && c!=32)
		{
			a[c++]=x%2;
			x=x/2;
			exp--;
		}
		int tempc=0;
		for (int i=9;i<=c/2;i++)
		{
			int temp=a[i];
			a[i]=a[c-tempc];
			a[c-tempc]=temp;
			tempc++;
		}
		
		while(c!=32)
		{
			m=m*2;
			a[c]=(int)(m);
			c++;
			if(m>=1)
				m--;
		}
		
		System.out.print("\n 	                 S   Exponent              Mantissa");
		System.out.print("\nBinary IEEE 754 Format : ");
		for(int i=0;i<32;i++)
		{
			System.out.print(a[i]);
			if((i+1)%4==0)
				System.out.print(" ");
			if(i==0)
				System.out.print("   ");
			if(i==7)
				System.out.print("   ");
		}

		
		c=0;
		while(c!=32)
		{
			for(int i=3;i>=0;i--)
			{
				op[cop]=op[cop]+(int)(a[c]*Math.pow(2,i));
				c++;
			}
			if(op[cop]==0)
				z[cop]='0';
			if(op[cop]==1)
				z[cop]='1';
			if(op[cop]==2)
				z[cop]='2';
			if(op[cop]==3)
				z[cop]='3';
			if(op[cop]==4)
				z[cop]='4';
			if(op[cop]==5)
				z[cop]='5';
			if(op[cop]==6)
				z[cop]='6';
			if(op[cop]==7)
				z[cop]='7';
			if(op[cop]==8)
				z[cop]='8';
			if(op[cop]==9)
				z[cop]='9';
			if(op[cop]==10)
				z[cop]='A';
			if(op[cop]==11)
				z[cop]='B';
			if(op[cop]==12)
				z[cop]='C';
			if(op[cop]==13)
				z[cop]='D';
			if(op[cop]==14)
				z[cop]='E';
			if(op[cop]==15)
				z[cop]='F';
			cop++;
		}
		
		int d=0;
		System.out.print("\n\nHexadecimal : ");
		while(d!=8)
			System.out.print(z[d++]);	

	}
}