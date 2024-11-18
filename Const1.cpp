#include<iostream>
using namespace std;



int main()
{
    int No1 = 10;

    const int No2 = 10;

//initialization
    No1++; //Allowed
    No2++; //Not Allowed

//reinitialization
    No1 = 21;  //Allowed
    No2 = 21;  //Not Allowed

    return 0;
}