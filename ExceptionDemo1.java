import java.util.Scanner;
class ExceptionDemo1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;

        System.out.println("enter first number :");
        No1 = sobj.nextInt();

         System.out.println("enter second number :");
        No2 = sobj.nextInt();

        Ans = No1 / No2;

        System.out.println("Division is :"+Ans);

    }
}