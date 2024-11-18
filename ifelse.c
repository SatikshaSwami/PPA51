#include<stdio.h>

int main()
{
    int No = 0, Result = 0;

    printf("Enter number :\n");
    scanf("%d",&No);

Result = No % 2;

if(Result == 0)   // == equality operator
{
    printf("it is even number\n");

}
else
{
    printf("it is odd number\n");

}


    return 0;
}