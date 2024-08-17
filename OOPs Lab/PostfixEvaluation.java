//import java.util.Scanner;

class Stack
{
    private int top=-1;
    private int data[];
    public Stack()
    {
        this.data=new int[10];
    }
    public void push(int a)
    {
        if(top==data.length-1)
            System.out.println("Stack Overflow");
        top++;
        data[top]=a;
    }
    public int pop()
    {
        int temp=0;
        if(top==-1)
           temp=9999;
        else
        {
          temp=data[top];
            top--;
        }
        return temp;
    }

}

class Eval
{
    private char ch;
    private int result;
    public void display(int x)
    {
        System.out.println(x);
    }
    public void evaluate(String str)
    {
        Stack stk=new Stack();
        for(int i=0;i<str.length();i++)
        {
            ch=str.charAt(i);
            if(Character.isDigit(ch))
              stk.push((int)ch-'0');
            if(!Character.isDigit(ch)&&ch!=',')
            {
                int temp1,temp2;
                temp2=stk.pop();
                temp1=stk.pop();

                switch(ch)
                {
                    case '+': stk.push(temp2+temp1);break;           
                    case '-': stk.push(temp1-temp2);break;
                    case '*': stk.push(temp1*temp2);break;
                    case '/': stk.push(temp1/temp2);break;
                    default:
                }
            } 
        }
        result=stk.pop();
        if(stk.pop()==9999)
            display(result);
        else
            System.out.println("Equation is wrong");

    }

}

public class PostfixEvaluation {
    public static void main(String[] args) {

//        String str;
//        System.out.println("Enter the equation:");
//        Scanner sc=new Scanner(System.in);
//        str=sc.next();
        Eval exp=new Eval();
        exp.evaluate("23*1+");  
    }
}