import java.util.Scanner;
 
class MatSOD
{
   public static void main(String args[])
   {
    int m, n,sum=0,i,j;
 
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the number of rows and columns of matrix");
    m = in.nextInt();
    n = in.nextInt();
 
    int a[][] = new int[m][n];
 
    System.out.println("Enter the elements of matrix");
 
    for ( i = 0 ; i < m ; i++ )
        for ( j = 0 ; j < n ; j++ )
            a[i][j] = in.nextInt();
	
	for(i=0;i<m && i<n ;i++)
	{
		sum=sum+a[i][i] ;
	}
	
	System.out.println("\nSum of Diagonal Elements = "+sum+"\n");
   }
}