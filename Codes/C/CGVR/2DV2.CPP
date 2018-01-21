#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <math.h>

void translate(int x1,int y1,int x2,int y2)
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int sx=getmaxx()/2;			
	int sy=getmaxy()/2;			
	putpixel(x1+sx,y1+sy,RED);
	putpixel(x2+sx,y2+sy,GREEN);
	line(x1+sx+1,y1+sy+1,x2+sx-1,y2+sy-1);
}

void rotate(int x1,int y1,float angle)
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int sx=getmaxx()/2;			
	int sy=getmaxy()/2;			
	angle=angle*3.14/180;
	int xr=(int)(x1*cos(angle) - y1*sin(angle));
	int yr=(int)(x1*sin(angle) + y1*cos(angle));
	
	line(sx,sy,x1+sx,y1+sy);
	line(sx,sy,xr+sx,yr+sy);
}

void scale(int x1,int y1,int x2,int y2,int x3,int y3,float S)
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int sx=getmaxx()/2;			
	int sy=getmaxy()/2;		
	
	int xs1=x1*S;
	int xs2=x2*S;
	int xs3=x3*S;
	
	int ys1=y1*S;
	int ys2=y2*S;
	int ys3=y3*S;
	
	line(x1+sx,y1+sy,x2+sx,y2+sy);
	line(x2+sx,y2+sy,x3+sx,y3+sy);
	line(x3+sx,y3+sy,x1+sx,y1+sy);
	
	line(xs1+sx,ys1+sy,xs2+sx,ys2+sy);
	line(xs2+sx,ys2+sy,xs3+sx,ys3+sy);
	line(xs3+sx,ys3+sy,xs1+sx,ys1+sy);
}

void reflect(int x1,int y1,int x2,int y2,int x3,int y3,int wrt)
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int sx=getmaxx()/2;			
	int sy=getmaxy()/2;			
	
	int xf1,xf2,xf3,yf1,yf2,yf3;
	if(wrt==0)		//origin
	{
		xf1=-x1;
		xf2=-x2;
		xf3=-x3;
		
		yf2=-y1;
		yf2=-y2;
		yf3=-y3;
	}
	if(wrt==1)		//x
	{
		xf1=x1;
		xf2=x2;
		xf3=x3;
		
		yf2=-y1;
		yf2=-y2;
		yf3=-y3;
	}
	if(wrt==2)		//y
	{
		xf1=-x1;
		xf2=-x2;
		xf3=-x3;
		
		yf2=y1;
		yf2=y2;
		yf3=y3;
	}
	
	line(x1+sx,y1+sy,x2+sx,y2+sy);
	line(x2+sx,y2+sy,x3+sx,y3+sy);
	line(x3+sx,y3+sy,x1+sx,y1+sy);
	
	line(xf1+sx,yf1+sy,xf2+sx,yf2+sy);
	line(xf2+sx,yf2+sy,xf3+sx,yf3+sy);
	line(xf3+sx,yf3+sy,xf1+sx,yf1+sy);
}

void sheer(int side1,int side2,float Sh,int type)
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int sx=getmaxx()/2;		
	int sy=getmaxy()/2;			
	int xh1,xh2,xh3,xh4,yh1,yh2,yh3,yh4;
	
	if(type==1)					//x
	{
		xh1=sx;
		xh2=sx+side2;
		xh3=sx+side1+side2*Sh;
		xh4=sx+side2*Sh;
		yh1=yh2=sy;
		yh3=yh4=sy+side2;
		
		line(xh1,yh1,xh2,yh2);
		line(xh2,yh2,xh3,yh3);
		line(xh3,yh3,xh4,yh4);
		line(xh4,yh4,xh1,yh1);
	}
	if(type==2)					//y
	{
		xh1=xh2=sx;
		xh3=xh4=sx+side2;
		yh1=sy;
		yh2=sy+side2;
		yh3=sy+side2+side1*Sh;
		yh4=sy+side1*Sh;
		
		line(xh1,yh1,xh2,yh2);
		line(xh2,yh2,xh3,yh3);
		line(xh3,yh3,xh4,yh4);
		line(xh4,yh4,xh1,yh1);
	}
	
	line(sx,sy,sx,side2+sy);
	line(sx,sy,side1+sx,sy);
	line(sx,side2+sy,side1+sx,side2+sy);
	line(side1+sx,sy,side1+sx,side2+sy);
}

void main()
{
	int ch,type;
	int x1,y1,x2,y2,x3,y3,angle,side,side1,side2;
	float S;
	
	printf("\n1.Translate\n2.Rotate\n3.Scale\n4.Reflect\n5.Sheer\n\nEnter your Choice : ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("Enter co-ordinates of Point : ");
		scanf("%d %d",&x1,&y1);
		
		printf("Enter co-ordinates of Destination : ");
		scanf("%d %d",&x2,&y2);
		
		translate(x1,-y1,x2,-y2);
	}
	else if(ch==2)
	{
		printf("Enter co-ordinates of Point : ");
		scanf("%d %d",&x1,&y1);
		
		printf("Enter Angle in Degrees : ");
		scanf("%d",&angle);
		
		rotate(x1,-y1,angle);
	}
	else if(ch==3)
	{
		printf("Enter co-ordinates of Triangle : ");
		scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
		
		printf("Enter Scaling Factor : ");
		scanf("%f",&S);
		
		scale(x1,-y1,x2,-y2,x3,-y3,S);
	}
	else if(ch==4)
	{
		printf("Enter co-ordinates of Triangle : ");
		scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
		
		printf("Enter 0 for wrt Origin 1 for wrt X-axis or 2 for wrt Y-axis : ");
		scanf("%d",&type);
		
		reflect(x1,-y1,x2,-y2,x3,-y3,type);
	}
	else if(ch==5)
	{
		printf("Enter Sides of Rectangle : ");
		scanf("%d %d",&side1,&side2);
		
		printf("Enter Sheer Factor : ");
		scanf("%f",&S);
		
		printf("Enter 1 for wtr X-axis or 2 for wrt Y-axis : ");
		scanf("%d",&type);

		sheer(side1,side2,S,type);
	}
	else
	{
		printf("Wrong Input.............Try Again!!!");
		main();
	}
	getch();
}