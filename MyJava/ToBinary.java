import java.lang.*;

class ToBinary
{
	public static void main(String arg[])
	{
		int a=125;	//Decimal input
		byte b=125;
		short c=12;
		System.out.println(Integer.toBinaryString(a));	//Binary Output
		System.out.println(Integer.toOctalString(a));	//Octal output
		System.out.println(Integer.toHexString(a));	//Hex output

		System.out.println(Integer.toBinaryString(b));
		System.out.println(Integer.toBinaryString(c));

		int x=0b1010;	//Binary input
		int y=012;	//Octal input
		int z=0xA;	//Hex input
		System.out.println(x);	//Decimal output
		System.out.println(y);
		System.out.println(z);


	}
}	