import java.util.Scanner;

public class FibSeries {
    public static int fib(int n)
    {
        if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
    }
    public static void fibonacciSeries(int n)
    {
        System.out.print("Fibonacci Series: ");
        for(int i=0;i<n;i++)
        {
            System.out.print(+fib(i)+" ");
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        sc.close();
        FibSeries.fibonacciSeries(n);
    }
}
