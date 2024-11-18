class Arithmatic
{
    public int No1;
    public int No2;

    public Arithmatic()
    {
        System.out.println("Inside default constructor");
        No1 = 0;  //this.No1
        No2 = 0;  //this.No1
    }

     public Arithmatic(int A, int B)
    {
        System.out.println("Inside Parameterised constructor");
        No1 = A; //this.No1 = A
        No2 = B;  //this.No1 = B
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
}

class Encapsulation
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main function ");
        Arithmatic aobj1 = new Arithmatic();
        Arithmatic aobj2 = new Arithmatic(11,10);

        int Ret = 0;
        Ret = aobj2.Addition();
        System.out.println("Addition is:"+Ret);

         Ret = aobj2.Substraction();
        System.out.println("Substraction is:"+Ret);
    }
}