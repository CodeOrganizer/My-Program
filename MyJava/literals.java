import java.lang.*;

class literals
{
	public static void main(String arg[])
	{
		/* literal are constant used in a programming language. like int a=5; here 5 is a literal.
		literal also has their own type. like if i say byte a=5 or short b=2; the 5 and 2 both take integer literal .
		Actually byte,short,int all take integer literal. number with decimal point by default double literal. for float F/f
		and for double D/d and for long L/l should mention. character single qoute ''. String is not primitive data type,it's a 		class. String str="Hello" ,here "hello" is a object, str is references and string is class.
	
		*/
		
		//float a=3.56; it will give error incompatible type: double to float wich is not possible
		float a=3.14f;

		byte b=123; //it will not show errror though it takes integer literal but size of literal 123 within byte limit.

		long c=99999999999L;//here if you not give "L/l".it will show error:integer is too large.To change the literal to long,have 		//to give L/l at end of literal.

		String str="Hello";
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
		System.out.println(str);
	}
}