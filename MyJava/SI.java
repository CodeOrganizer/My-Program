import java.lang.*;
import java.util.*;

class SI
{
	public static void main(String args[])
	{	
		System.out.print("Enter the principl amount in Rs.: ");
		Scanner s= new Scanner(System.in);
		float p=s.nextFloat();
		System.out.print("\nEnter the interest rate in %: ");
		float r=s.nextFloat();
		System.out.print("\nEnter the time period in year: ");
		float t=s.nextFloat();
		float interest=(p*r*t)/100;
		float total=p+interest;
		System.out.print("\nThe interest will be Rs. "+interest);
		System.out.print("\nThe total amount will be Rs. "+total);
	}
}
		