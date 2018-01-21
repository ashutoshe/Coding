#include <stdio.h>
#include <math.h>

#define LIM 10

long fact(long x)
{
	long temp=1;
	for(long i=1;i<=x;i++)
		temp=temp*i;
	return temp;	
}

int main()
{
	long x=0,c=0;
	
	while(1)
	{
		x++;
		if(fact(x)==0)
			break;

		 double temp=x+fact(x);
		 temp=sqrt(temp);
		 
		 if((temp - (double)(long)temp)==0.0d)
		 {
			printf("%ld ",x);
			c++;
		 }

		 if(c==LIM || x>100)
			break;
	}
	return 0;
}