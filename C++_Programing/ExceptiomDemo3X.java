import java.util.*;

class Demo
{
    public static int Division(int no1, int no2) throws ArithmeticException
    {
    return no1 / no2;
    }
}

class ExceptiomDemo3X
 {
    public static void main(String A[] ) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0;
        int no2 = 0;
        int Ans = 0;
        
        System.out.println("Enter first number");
        no1 = sobj.nextInt();

        System.out.println("Enter second number");
        no2 = sobj.nextInt();

        Ans = Demo.Division(no1,no2);

        System.out.println("Division is" +Ans);
        
    }
}
