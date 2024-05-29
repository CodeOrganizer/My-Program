import java.lang.*;
import java.util.*;

class WelcomeMessage
{
	public static void main(String args[])
	{
		System.out.print("Enter your name: ");
		Scanner s= new Scanner(System.in);
		String name= s.nextLine();
		System.out.println("Hello "+name+"!!!Welcome to Java.");

		//Using hexadecimal converting to decimal:

		s.useRadix(16);
		int x=s.nextInt();
		System.out.println(x);
	}
}