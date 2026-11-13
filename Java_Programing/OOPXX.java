class Arithematic
{
public int no1;
public int no2;

   public Arithematic()
    {
        this.no1 = 0;
        this.no2 = 0;
    }
    public Arithematic(int i, int j)
    {
        this.no1 = i;
        this.no2 = j;
    }
    public int Addition()
    {
        int ans = 0;
        ans = this.no1+this.no2;
        return ans;

    }
    public int Substarction()
    {
        int ans = 0;
        ans = this.no1-this.no2;
        return ans;

    }
}

class OOPXX 
{
    public static void main(String A[])
    {
        Arithematic aobj1 = new Arithematic(21,10);

        int result =0;

        result = aobj1.Addition();

        System.out.println("Addition is :" +result);

        result = aobj1.Substarction();

        System.out.println("Substraction is :" +result);
    }
}
