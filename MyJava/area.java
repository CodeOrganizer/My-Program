import java.lang.*;
import java.util.*;

class area
{
	public static void main(String[] args)
	{
		/*float base,height,area;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the base: ");
		base=s.nextFloat();
		System.out.print("\nEnter the height: ");
		height=s.nextFloat();
		area=(float)0.5*base*height;
		System.out.print("\nArea is: "+area);*/
		
		float a,b,c,s,area;
		System.out.print("Enter the sides: ");
		Scanner sc=new Scanner(System.in);
		a=sc.nextFloat();
		b=sc.nextFloat();
		c=sc.nextFloat();
		s=(a+b+c)/2f;
		area=(float)Math.sqrt(s*(s-a)*(s-b)*(s-c));
		System.out.printf("\nArea is: %.2f",area);

		
	}
}