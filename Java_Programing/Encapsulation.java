class Marvellous
{
    public int no1;     // Charecteristics
    public int no2;

    public void fun()    // Behaviours
    {
        System.out.println("Inside fun");
    }
}

class Encapsulation

{
    public static void main(String A[]) 
    {
        Marvellous mobj = new Marvellous();

        mobj.fun();

        System.out.println(mobj.no1);
        System.out.println(mobj.no2);

    }

}
