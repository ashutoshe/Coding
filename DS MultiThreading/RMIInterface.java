import java.rmi.*;

public interface RMIInterface extends Remote
{
	public int[][] operation(int [][]a,int [][]b,String ch) throws RemoteException;
}