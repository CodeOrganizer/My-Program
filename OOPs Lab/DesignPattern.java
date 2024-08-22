import java.util.Scanner;

public class DesignPattern {

    public static void drawTriangle(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print("*"+" ");
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
                System.out.print("*"+" ");
            }
            System.out.println();
        }
    }
    public static void drawRectangle(int m,int n)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                System.out.print("*"+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        int a,n,m;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter choice[1. Triangle, 2. Square, 3. Rectangle]: ");
        a=sc.nextInt();
        switch(a)
        {
            case 1: 
                        System.out.print("\nEnter the side length: ");
                        n=sc.nextInt();
                        System.out.println("");
                        DesignPattern.drawTriangle(n);
                        break;
            case 2: 
                        System.out.print("\nEnter the side length: ");
                        n=sc.nextInt();
                        System.out.println("");
                        DesignPattern.drawSquare(n);
                        break;
            case 3: 
                        System.out.print("\nEnter the length: ");
                        m=sc.nextInt();
                        System.out.print("\nEnter the breadth: ");
                        n=sc.nextInt();
                        System.out.println("");
                        DesignPattern.drawRectangle(n, m);
                        break;
            default:    System.out.print("\nPlease enter valid option...");
        }
        sc.close();
    }
}