import java.lang.*;
import java.util.*;

class merge_mask
{
	public static void main(String[] args)
	{
		/*
		byte a=9,b=12,c=0;
		System.out.println("c: "+String.format("%s",c&0b11111111));
		c=(byte)(c|b);
		a=(byte)(a<<4);
		c=(byte)(c|a);
		System.out.println("a: "+String.format("%s",(c&0b11110000)>>4));
		System.out.println("b: "+String.format("%s",(c&0b00001111)));
		*/
		byte c;
		c=(byte)(9<<4);	//typecast has lager precedance than or,and etc.
		c=(byte)(c|12);
		System.out.println((c&0b11110000)>>4);
		System.out.println(c&0b00001111);

	}
}