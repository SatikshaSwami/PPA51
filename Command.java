class Command
{
    public static void main(String Arg[])
    {
        System.out.println("Number of command line arguments are :"+Arg.length);

        /*
        System.out.println(Arg[0]);
        System.out.println(Arg[1]);
        System.out.println(Arg[2]);
        */

        for(int i = 0; i < Arg.length; i++)
        {
            System.out.println(Arg[i]);
        }
    }
}
/*

javac Command.java
java Command Hello 21 Marvellous

op :

C:\Users\rajes\OneDrive\Desktop\PPA>javac Command.java

C:\Users\rajes\OneDrive\Desktop\PPA>java Command.java
Number of command line arguments are :0

C:\Users\rajes\OneDrive\Desktop\PPA>java Command Hello
Number of command line arguments are :1

C:\Users\rajes\OneDrive\Desktop\PPA>java Command Hello 21
Number of command line arguments are :2

C:\Users\rajes\OneDrive\Desktop\PPA>java Command Hello 21 Marvellous
Number of command line arguments are :3


loop :


C:\Users\rajes\OneDrive\Desktop\PPA>javac Command.java

C:\Users\rajes\OneDrive\Desktop\PPA>java Command.java
Number of command line arguments are :0

C:\Users\rajes\OneDrive\Desktop\PPA>java Command.java PPA
Number of command line arguments are :1
PPA

C:\Users\rajes\OneDrive\Desktop\PPA>java Command.java PPA LB
Number of command line arguments are :2
PPA
LB

C:\Users\rajes\OneDrive\Desktop\PPA>java Command.java PPA LB Python
Number of command line arguments are :3
PPA
LB
Python

C:\Users\rajes\OneDrive\Desktop\PPA>java Command.java PPA LB Python Angular
Number of command line arguments are :4
PPA
LB
Python
Angular



 */