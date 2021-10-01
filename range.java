class PalindromeRange
{
    public static void main(String args[])
    {
        int rev, num, temp, rem;
        for(int i = 100;i <= 200;i++)
        {
            rev=0;
            num = temp = i;
            while(num > 0)
            {
                rem = num % 10;
                rev= rev * 10 + rem;
                num= num / 10;
            }
            if(temp == rev)
                System.out.println("Palindrome number : "+temp);
        }
    }
}
