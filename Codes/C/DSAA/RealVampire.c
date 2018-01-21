#include <stdio.h>
#include <math.h>

int reverse(int t)
{
	int rev=0;
	while(t!=0)
	{
		rev=10*rev+t%10 ;
		t=t/10;
	}
	return rev;
}

int vampire(int x)
{
	int t=x,c=0,a,b;
	
	while(t!=0)
	{
		c++;
		t=t/10;
	}
	
	if(c%2==1)
		return 0;
	
	a=x/pow(10,c/2);
	b=x-(a*pow(10,c/2));
	
	a=reverse(a);

	if(a*b==x)
		return 1;
	return 0;
}

void main()
{
	int x=1;
	
	while(x++)
	{
		if(vampire(x))
			printf("%d ",x);
	}
}