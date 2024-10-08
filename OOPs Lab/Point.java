public class Point      
{
    private int x;
    private int y;

    public Point()
    {
        x=0;y=0;
    }
    public Point(int x,int y)
    {
        this.x=x;this.y=y;
    }
    public void setCoordinate(int x,int y)
    {
        this.x=x;this.y=y;
    }
    public  void getCoordinate()
    {
      System.out.println("("+x+","+y+")"); 
    }
    public void getDistance()
    {
       System.out.println(Math.sqrt(Math.pow(x,2)+Math.pow(y,2)));
    }
    public void getDistance(Point p)
    {
       System.out.println(Math.sqrt(Math.pow((p.x-x),2)+Math.pow((p.y-y),2)));
    }
    public boolean isEqual(Point p)
    {
        if(p.x==x && p.y==y)
            return true;
        return false;
    }

    public static void main(String[] args) {
       Point p1=new Point(2,2);
       Point p2=new Point(2,2);
       p1.getCoordinate();
       p1.getDistance();
       System.out.println("Equal: "+p1.isEqual(p2));
    }
}