import java.lang.*;
import java.util.*;

class sum
{
	public static void main(String args[])
	{	
		System.out.println("Enter two numbers:");
		Scanner s=new Scanner(System.in);
		int a,b,c;
		a=s.nextInt();
		b=s.nextInt();
		c=a+b;
		System.out.println("The sum is "+c);
	}
}