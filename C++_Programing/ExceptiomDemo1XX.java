import java.util.*;

class ExceptiomDemo1XX
 {
    public static void main(String A[] ) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0;
        int no2 = 0;
        int Ans = 0;

    try
    {
        System.out.println("Enter first number");
        no1 = sobj.nextInt();

        System.out.println("Enter second number");
        no2 = sobj.nextInt();

        Ans = no1 / no2;
    }
    catch(ArithmeticException aobj)
    {
        System.out.println("Exception Occured " +aobj);
    }
    catch(Exception eobj)
    {
        System.out.println("Inside generic catch");
    }
    finally
    {
        System.out.println("inside finaly block");
    }

        System.out.println("Division is" +Ans);
        
    }
}
