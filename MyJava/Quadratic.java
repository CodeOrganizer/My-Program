
import java.util.*;
public class Quadratic 
{

	public static void main(String[] args) 
		{
	
		int a,b,c;
		double r1,r2;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the co-efficeint of x^2: ");
		a=s.nextInt();
		System.out.println("Enter the co-efficeint of x: ");
		b=s.nextInt();
		System.out.println("Enter the value of constant term: ");
		c=s.nextInt();
		if((b*b)-(4*a*c)<0)
			System.out.println("The root is imaginary");
		else
		{
			r1=(((-b)+ Math.sqrt((b*b)-(4*a*c)))/(2*a));
			r2=(((-b)- Math.sqrt((b*b)-(4*a*c)))/(2*a));

            System.out.printf("1st Root: %.2f",r1);
            //System.out.println("1st Root: " + String.format("%.2f", r1));
            System.out.println();
			System.out.printf("2nd Root: %.2f",r2);
		}
			
	}

}
