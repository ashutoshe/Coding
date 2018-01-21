import java.util.Scanner;
 
class MatTra2
{public static int m, n,c,d;
   public static void main(String args[])
   {
      Scanner in = new Scanner(System.in);
      System.out.println("Enter the number of rows and columns of matrix");
      m = in.nextInt();
      n = in.nextInt();
 
      int matrix[][] = new int[m][n];
 
      System.out.println("Enter the elements of matrix");
 
      for ( c = 0 ; c < m ; c++ )
         for ( d = 0 ; d < n ; d++ )
            matrix[c][d] = in.nextInt();
 
		MatTra2.transpose(matrix) ;
   }
   
   public static void transpose(int [][]x)
   {
	   int transpose[][] = new int[n][m];
 
      for ( c = 0 ; c < m ; c++ )
      {
         for ( d = 0 ; d < n ; d++ )               
            transpose[d][c] = x[c][d];
      }
 
      System.out.println("Transpose of entered matrix:-");
 
      for ( c = 0 ; c < n ; c++ )
      {
         for ( d = 0 ; d < m ; d++ )
               System.out.print(transpose[c][d]+"\t");
 
         System.out.print("\n");
      }
   }
}