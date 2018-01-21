import java.lang.* ;
import java.util.* ;

class GuessGame
{
	public static void main(String[] args)
	{
		int a,b;
		Scanner s = new Scanner(System.in) ;
		System.out.print("\n\nMake A Guess Between 0 and 9 : ") ;
		a=s.nextInt() ; 
		b=(int)(10.0*Math.random());
		
		if(a==b)
		{
			System.out.print("\nCONGRATS U WIN!!!!!!!!!!!!\n\n") ;
			System.exit(1);
		}
		else
		{
			System.out.print("\nTRY AGAIN U LOSER THE ANSWER WAS "+b) ;
			GuessGame.main(null) ;
		}
	}
}