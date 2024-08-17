public class CheckPallindrome
{
	public static boolean isPalindrome(String str)
    {
        String rev = "";

        boolean ans = false;

        for (int i = str.length() - 1; i >= 0; i--) {
            rev = rev + str.charAt(i);
        }

        if (str.equals(rev)) {
            ans = true;
        }
        return ans;
    }
	public static void main(String[] args) throws Exception
	{
		
        try{
			if (CheckPallindrome.isPalindrome(args[0]))
				System.out.println("Is Pallidrome");
			else
				System.out.println("Is not Pallidrome");
        }
        catch(Exception e)
        {
            System.out.println(e + "\nPlease enter the string as command line argument.");
        }
	}
}