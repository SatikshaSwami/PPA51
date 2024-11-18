import java.util.Scanner;

class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)
    {
        super(str);
        System.out.println("inside constructor");
    }

}
class ExceptionDemo6
{
    public static void main(String Agr[])
    {
        Scanner sobj = new Scanner(System.in);

        int Age  = 0;

        System.out.println("enter yot age :");
        Age = sobj.nextInt();

        try
        {
            System.out.println("inside try");
            if(Age < 18)
            {
               /* AgeInvalidException aobj = new AgeInvalidException("your age is less than 18");
                throw aobj;
                */
              throw new AgeInvalidException("your age is less than 18");
            }
        }

        catch(AgeInvalidException obj)
        {
            System.out.println("inside catch");
            System.out.println(obj);


        }

        finally
        {
            System.out.println("Inside finally");
        }
                    System.out.println("end of application");



        
    }
}