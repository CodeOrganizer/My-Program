class IncDecOp
{
    public static void main(String[] args)
    {
        int x=5,y;
        y=++x;
        System.out.println("x,y: "+x+","+y);
        x--;
        y=x++;
        System.out.println("x,y: "+x+","+y);

        char c=65;
        c+=2;
       // c=c+1;    possible lossy conversion error int to char
        System.out.println(c);

        float d=13.5f;
        d--;
        System.out.println(d);
    }
}