import java.util.*;
public class Reverse
{
    public static void main(String[] args) {
        String str;int i=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String");
        str = sc.nextLine();
        sc.close();
        for(i=str.length()-1;i>=0;i--)
           System.out.print(str.charAt(i));
    }   
}

