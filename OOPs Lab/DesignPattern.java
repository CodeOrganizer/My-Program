import java.util.Scanner;

public class DesignPattern {

    public static void drawTriangle(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void drawSquare(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void drawRectangle(int m,int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        int a,n,m;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter choice[1. Triangle, 2. Rectangle, 3. Square]: ");
        a=sc.nextInt();
        sc.close();
        switch(a)
        {
            case 1: System.out.println("Enter the range: ");
                    n=sc.nextInt();
                    DesignPattern.drawTriangle(n);
                    break;
            case 3: System.out.println("Enter the range: ");
                    n=sc.nextInt();
                    DesignPattern.drawSquare(n);
                    break;
            case 2: System.out.println("Enter the range: ");
                    n=sc.nextInt();
                    m=sc.nextInt();
                    DesignPattern.drawRectangle(m, n);
                    break;
        }
    }
}