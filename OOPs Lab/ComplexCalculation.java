class Complex {
    private int real;
    private int imaginary;

    public Complex()
    {
        this.real=0;
        this.imaginary=0;
    }
    public Complex(int real,int imaginary)
    {
        this.real=real;
        this.imaginary=imaginary;
    }
    public void show()
    {
        System.out.println(real+"+"+imaginary+"i");
    }
       public static Complex add(Complex c1,Complex c2)
    {
        Complex res_add=new Complex();
        res_add.real=c1.real+c2.real;
        res_add.imaginary=c1.imaginary+c2.imaginary;
        return res_add;
    }
    // public Complex add(Complex c2)
    // {
    //     Complex res_add=new Complex();
    //     this.real=c2.real;
    //     res_add.imaginary=c1.imaginary+c2.imaginary;
    //     return res_add;
    // }
    public static Complex subtract(Complex c1,Complex c2)
    {
        Complex res_sub=new Complex();
        res_sub.real=c1.real-c2.real;
        res_sub.imaginary=c1.imaginary-c2.imaginary;
        return res_sub;
    }
    public static Complex multiply(Complex c1,Complex c2)
    {
        Complex res_mul=new Complex();
        res_mul.real=c1.real*c2.real-c1.imaginary*c2.imaginary;
        res_mul.imaginary=c1.real*c2.imaginary+c1.imaginary*c2.real;
        return res_mul;
    }
    public static boolean isEqual(Complex c1,Complex c2)
    {
        return c1.real==c2.real && c1.imaginary==c2.imaginary;
    }
}
public class ComplexCalculation
{
    public static void main(String[] args) {

        Complex c1=new Complex(3, 5);
        Complex c2=new Complex(5, 2);
        Complex res;

        c1.show();
        c2.show();

        res=Complex.add(c1, c2);
        System.out.print("Addition: ");
        res.show();

        res=Complex.subtract(c1, c2);
        System.out.print("Subtraction: ");
        res.show();

        res=Complex.multiply(c1, c2);
        System.out.print("Multiplication: ");
        res.show();

        System.out.println("Equality: "+Complex.isEqual(c1, c2));

    }
}