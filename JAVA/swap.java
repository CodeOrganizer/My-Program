import java.lang.*;
import java.util.*;

class swap
{
	public static void main(String[] args)
	{
		int a,b;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter 1st number: ");
		a=s.nextInt();
		System.out.println("Enter 2nd number: ");
		b=s.nextInt();
		System.out.println("Before Swap\n"+"1st: "+a + "\n2nd: "+b);
		a=a^b;
		b=a^b;
		a=a^b;
		System.out.println("After swap\n"+"1st: "+a + "\n2nd: "+b);
		
	}
}