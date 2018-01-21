import java.util.* ;

class StrCount
{public static int u,l,d,s ;
	public static void main(String[]args)
	{
		int i,n ;
		n=args[0].length() ;     		
		char[]c =new char[n] ;
		c=args[0].toCharArray() ;		
		
		for(i=0;i<n;i++)
		{
			if(c[i]>='A' && c[i]<='Z')
				u=u+1 ;
			
			if(c[i]>='a' && c[i]<='z')
				l=l+1 ;
			
			if(c[i]>='0' && c[i]<='9')
				d=d+1 ;
			
			if(c[i]==' ')
				s=s+1 ;
		}
		
		System.out.print("\n"+u+" Upper Case Letters"+"\n"+l+" Lower Case Letters"+"\n"+d+" Digits"+"\n"+s+" Spaces"+"\n") ;
	}
}