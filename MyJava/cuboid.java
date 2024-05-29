import java.util.*;

class cuboid
{
    public static void main(String[] args)
    {
        int l,b,h,area,volume;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter length:");
        l=s.nextInt();
        System.out.println("Enter breadth:");
        b=s.nextInt();
        System.out.println("Enter height:");
        h=s.nextInt();
        volume=l*b*h;
        area=2*(l*b+l*h+b*h);
        System.out.println("Volume is: "+volume);
        System.out.println("Area is: "+area);

        
    }
}