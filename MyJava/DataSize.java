import java.lang.*;

class DataSize
{
	public static void main(String args[])
	{
		System.out.println("Integer Limit & Size:");
		System.out.println(Integer.MAX_VALUE);
		System.out.println(Integer.MIN_VALUE);
		System.out.println(Integer.SIZE);	//in bit
		System.out.println(Integer.BYTES);	//in byte

		System.out.println("\nShort Limit & Size:");
		System.out.println(Short.MAX_VALUE);
		System.out.println(Short.MIN_VALUE);
		System.out.println(Short.BYTES);
		
		System.out.println("\nLong Limit & Size:");
		System.out.println(Long.MAX_VALUE);
		System.out.println(Long.MIN_VALUE);
		System.out.println(Long.BYTES);

		System.out.println("\nDouble Limit & Size:");
		System.out.println(Double.MAX_VALUE);
		System.out.println(Double.MIN_VALUE);
		System.out.println(Double.BYTES);

		System.out.println("\nCharacter Limit & Size:");
		System.out.println(Character.MAX_VALUE);
		System.out.println(Character.MIN_VALUE);
		System.out.println(Character.BYTES);
	}
}