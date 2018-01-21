#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void bf(int x,int y,int fc,int bc)
{
	if((getpixel(x,y)!=fc) && (getpixel(x,y)!=bc))
	{
		putpixel(x,y,fc);
		
		bf(x,y-1,fc,bc);
		bf(x-1,y,fc,bc);
		bf(x+1,y,fc,bc);
		bf(x,y+1,fc,bc);
	}		
}

void ff(int x,int y,int fc,int oc)
{
	if(getpixel(x,y)==oc)
	{
		putpixel(x,y,fc);
		
		ff(x,y-1,fc,oc);
		ff(x-1,y,fc,oc);
		ff(x+1,y,fc,oc);
		ff(x,y+1,fc,oc);
	}
}

void main()
{
	int gd=DETECT,gm;
	int ch,n,fc,xs,ys,oc;
	int i;
	int x[10],y[10];
	
	//initgraph(&gd,&gm,"C:\\TC\\BGI");

	printf("\nEnter no of Vertices : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nEnter Co-ordinates of %d Vertex : ",i+1);
		scanf("%d %d",&x[i],&y[i]);
	}

	printf("\nEnter Co-ordinates of Seed Point : ");
	scanf("%d %d",&xs,&ys);


	printf("\nEnter Fill Color : ");
	scanf("%d",&fc);

	printf("\n1.Boundary Fill\n2.Flood Fill\n\nEnter Your Choice : ");
	scanf("%d",&ch);

	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	for(i=0;i<n-1;i++)
	{
		line(x[i],y[i],x[i+1],y[i+1]);
	}
	line(x[0],y[0],x[n-1],y[n-1]);

	if(ch==1)
	{
		bf(xs,ys,fc,WHITE);
	}
	else if(ch==2)
	{
		cleardevice();
		oc=getpixel(xs,ys);
		ff(xs,ys,fc,oc);
	}
	else
	{
		cleardevice();
		printf("\nWrong Input");
		main();
	}
	getch();
	closegraph();
}