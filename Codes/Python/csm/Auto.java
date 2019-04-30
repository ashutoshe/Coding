import java.util.*;
import java.io.*;

class Auto
{
	public static void main(String[]args) throws IOException
	{
		int i,m,M,j,n;
		double num[];
		double sum=0,sim,sig,z;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter number of elements");
		n=Integer.parseInt(br.readLine());
		System.out.println("Enter values of i and m");
		i=Integer.parseInt(br.readLine());
		m=Integer.parseInt(br.readLine());
		M=((n-i)/m)-1;
		System.out.println("M="+M);
		num=new double[n];
		
		for(j=0;j<n;j++)
			//num[j]=((int)(Math.random()*100+1))/100.0;
		num[j]=Double.parseDouble(br.readLine());
		for(j=0;j<=M;j++)
			sum+=num[i-1+j*m]*num[i-1+(j+1)*m];
		sim=(sum/(M+1.0))-0.25;
		sig=Math.sqrt(13.0*M+7.0)/(12.0*(M+1.0));
		z=sim/sig;
		
		System.out.println("sim="+sim+" sig="+sig+" z="+z);
	}
}