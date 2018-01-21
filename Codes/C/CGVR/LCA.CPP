#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void csclip(int x1,int y1,int x2,int y2,int b[8],int xwmin,int ywmin,int xwmax,int ywmax);
void check(int x,int y,int b[8],int i,int xwmin,int ywmin,int xwmax,int ywmax);
int f4=0,f3=0,f2=0,f1=0;
void lbclip(int x1,int y1,int x2,int y2,int xwmin,int ywmin,int xwmax,int ywmax);
void main()
{
clrscr();
int gd=DETECT,gm,ch;
initgraph(&gd,&gm,"c://TurboC3//bgi");
int x1,y1,xwmin,ywmin,xwmax,ywmax,x2,y2,b[8];
for(int i=0;i<8;i++)
b[i]=0;
printf("Enter end points of the line");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
getch();
printf("Enter coordinates of the window");
scanf("%d%d%d%d",&xwmin,&ywmin,&xwmax,&ywmax);
setcolor(RED);
line(xwmin,ywmin,xwmax,ywmin);
line(xwmax,ywmin,xwmax,ywmax);
line(xwmax,ywmax,xwmin,ywmax);
line(xwmin,ywmax,xwmin,ywmin);
printf("Enter 1 for Cohen-sutherland \n 2. for Liang barskey");
scanf("%d",&ch);
if(ch==1)
csclip(x1,y1,x2,y2,b,xwmin,ywmin,xwmax,ywmax);
else
lbclip(x1,y1,x2,y2,xwmin,ywmin,xwmax,ywmax);
getch();
}

void csclip(int x1,int y1,int x2,int y2,int b[8],int xwmin,int ywmin,int xwmax,int ywmax)
{
getch();
int flag=0,flag1=0,flag2=0;
int x=-12345,y=-12345,c1=0,c2=0,c3=0,c0=0;
setcolor(WHITE);
check(x1,y1,b,0,xwmin,ywmin,xwmax,ywmax);

if(b[0]==0&&b[1]==0&&b[2]==0&&b[3]==0)
  flag=1;

check(x2,y2,b,4,xwmin,ywmin,xwmax,ywmax);

if(b[4]==0&&b[5]==0&&b[6]==0&&b[7]==0)
  flag1=1;

if(flag==1&&flag1==1)
 line(x1,y1,x2,y2);
else
 {
 c3=b[0]&b[4];
 c2=b[1]&b[5];
 c1=b[2]&b[6];
 c0=b[3]&b[7];
 if(c3==0&&c2==0&&c1==0&&c0==0)
  flag2=1;
 if(flag2==1)
   {
     if(b[0]==1||b[4]==1)
   {
   if(f4==1)
   goto lab;
   else
   {
   x=xwmin;f4=1;
   }
   }
   else if(b[1]==1||b[5]==1)
   {
   if(f3==1)
   goto lab;
   else
   {
   x=xwmax;f3=1;
   }
   }
   else if(b[2]==1||b[6]==1)
   {
   if(f2==1)
   goto lab;
   else
   {
   y=ywmin;f2=1;
   }
   }
   else if(b[3]==1||b[7]==1)
   {
   if(f1==1)
   goto lab;
   else
   {
   y=ywmax;f1=1;
   }
   }
   if(x==-12345)
     x=x1+(((x2-x1)/(y2-y1))*(y-y1));
   else
     y=y1+(((y2-y1)/(x2-x1))*(x-x1));
	csclip(x,y,x2,y2,b,xwmin,ywmin,xwmax,ywmax);
	csclip(x1,y1,x,y,b,xwmin,ywmin,xwmax,ywmax);
  }
  else
  {lab:
  setcolor(BLACK);
  line(x1,y1,x2,y2);
  }
}

}
void check(int x,int y,int b[8],int i,int xwmin,int ywmin,int xwmax,int ywmax)
{
if(x<xwmin)
b[i++]=1;
else
b[i++]=0;

if(x>xwmax)
b[i++]=1;
else
b[i++]=0;
if(y<ywmin)
b[i++]=1;
else
b[i++]=0;
if(y>ywmax)
b[i++]=1;
else
b[i++]=0;
}
void lbclip(int x1,int y1,int x2,int y2,int xwmin,int ywmin,int xwmax,int ywmax)
{
cleardevice();
setcolor(4);
line(xwmin,ywmin,xwmax,ywmin);
line(xwmax,ywmin,xwmax,ywmax);
line(xwmax,ywmax,xwmin,ywmax);
line(xwmin,ywmax,xwmin,ywmin);

setcolor(WHITE);

float p[4],q[4];
int i,j,k;
float r[4],max[5],min[5],x1n,x2n,y1n,y2n,mi,ma,u1,u2;
min[0]=1.0;
max[0]=0.0;
p[0]=-(x2-x1);
p[1]=(x2-x1);
p[2]=-(y2-y1);
p[3]=(y2-y1);

q[0]=x1-xwmin;
q[1]=xwmax-x1;
q[2]=y1-ywmin;
q[3]=ywmax-y1;

for(i=0;i<4;i++)
{
 if(p[i]==0)
  {
  if(q[i]<0)
  return;
  }
}
for(i=0;i<4;i++)
r[i]=q[i]/p[i];

for(i=0;i<4;i++)
for(j=1,k=1,i=0;i<4;i++)
{
if(p[i]<0)
max[j++]=r[i];
else
min[k++]=r[i];
}
for(i=0;i<j-1;i++)
{ma=max[i];
    if(max[i]>ma)
    ma=max[i];
}
u1=ma;
for(i=0;i<k-1;i++)
{mi=min[i];
    if(min[i]<mi)
    mi=min[i];
}
u2=mi;
if(u1>u2)
return;
else
{
x1n=x1+u1*(x2-x1);
y1n=y1+u1*(y2-y1);
x2n=x1+u2*(x2-x1);
y2n=y1+u2*(y2-y1);
line(x1n,y1n,x2n,y2n);
}
}