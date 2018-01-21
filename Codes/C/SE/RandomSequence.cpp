#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100][100]={"P1","P2","P3","P4","P5","P6","P7","P8","P9","P10"};
	int count = 10 ;
	
	char f[100][100];
		
		
	int i,j,temp,ch;
	//char t[100];
	
	int prime[30] = {59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199} ;
	int countp = 0;
	
	int pid[100]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
	
	while(true)
	{
		printf("\nCurrent Sequence : ");
		for(i=0;i<count;i++)
		{
			printf("%s ",a[i]);
		}
		
		printf("\n\n1.Add\n2.Randomize Sequence\nEnter Your Choice : ");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("\nEnter Product Name : ");
			scanf("%s",&a[count]);
			count++;
		}
		
		if(ch == 2)
		{
			for(i=0;i<count;i++)
			{
				pid[i] = ( pid[i] * prime[countp] % count ) + 1 ;
				strcpy(f[i],a[pid[i]-1]);
			}
			
			for(i=0;i<count;i++)
			{
				strcpy(a[i],f[i]);
			}
			
			countp=(countp+1)%30;
		}
	}
	return 0;
}