#include <stdio.h>
 
void towerOfHanoi(int n, char fromrod, char torod, char auxrod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
    towerOfHanoi(n-1, fromrod, auxrod, torod);
    printf("\n Move disk %d from rod %c to rod %c", n, fromrod, torod);
    towerOfHanoi(n-1, auxrod, torod, fromrod);
}
 
void main()
{
	while(1)
	{
		int n;
		printf("\n\nEnter Number of Disks : ");
		scanf("%d",&n);
		towerOfHanoi(n, 'A', 'C', 'B');
	}
}