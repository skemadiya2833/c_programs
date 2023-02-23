public class Primenumber {
    public static void main(String[] args)
    {
        int i , m = 0 , flag = 0 ;
        int n = 9 ;
        m = n / 2 ;
        if(n == 1 || n== 0 )
        {
            System.out.println(n+ "is Not A Prime Number");
        }
        else{
            for(i = 2 ; i <= m ; i++)
            {
                if( n % i == 0 )
                {
                    System.out.println(n+ "is Not A Prime Number");
                    flag = 1 ;
                    break ;
                }
            }
            if(flag == 0 )
            {
                System.out.println(n+ "is A Prime Number");        
            }
        }
    }
}
