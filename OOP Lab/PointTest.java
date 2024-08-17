class Point2      
{
    private int x;
    private int y;
    
    public Point2()
    {
        x=0;y=0;
    }
    public Point2(int x,int y)
    {
        this.x=x;this.y=y;
    }
    public void setCoordinate(int x,int y)
    {
        this.x=x;this.y=y;
    }
    public  void getCoordinate(int x,int y)
    {
      System.out.println("("+x+","+y+")"); 
    }
    public void getDistance()
    {
       System.out.println(Math.sqrt(Math.pow(x,2)+Math.pow(y,2)));
    }
    public void getDist(Point2 p)
    {
       System.out.println(Math.sqrt(Math.pow((p.x-x),2)+Math.pow((p.y-y),2)));
    }
    public boolean isEqual(Point2 p)
    {
        if(p.x==x && p.y==y)
            return true;
        return false;
    }
}
public class PointTest{

    public static void main(String[] args) {
       Point p1=new Point(2,2);
       Point p2=new Point(2,2);
       p1.getDistance();
       System.out.println(p1.isEqual(p2));
    }
}
