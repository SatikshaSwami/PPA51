
0#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
        void Fun()   //defination
        {
            cout<<"inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()    //redefination
        {
            cout<<"inside Derived fun\n";
        }
};

int main()
{

    Base bobj;
    Derived dobj;

    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;  //nocasting
    dptr = &dobj;  //nocasting

    bptr = &dobj;  //upcasting
    
    dptr = &bobj;  //downcasting

    return 0;
}