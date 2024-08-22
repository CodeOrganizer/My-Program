class Prime
{
	public static boolean isPrime(int n)
	{
		int flag=0;
		if(n==0 || n==1)
			flag=1;
		else
		{

			for(int i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			return false;
		else
			return true;
	}

    public static void primeInRange(int l,int h)
	{
		for(int i=l;i<=h;i++)
		{
			if(Prime.isPrime(i))
				System.out.print(i+" ");
		}
	}
}

class CheckPrime
{
	public static void main(String[] args) throws Exception
	{
		try
		{
			if(args.length==1)
			{
				if(Prime.isPrime(Integer.parseInt(args[0])))
					System.out.println(args[0]+" is prime.");
				else
					System.out.println(args[0]+" is not prime.");
			}
			else
				Prime.primeInRange(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
		}
		catch(Exception e)
		{
			System.out.println(e+"\nUsage: CheckPrime <value1> <value2>\nUse single value to check for prime number\nUse two values to check prime number within range");
		}
	}
}