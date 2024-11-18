#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int A, int B)    //Addition@2ii
        {
            return A+B;
        }
        double Addition(double A, double B)   //Addition@dd
        {
            return A+B;
        }
        int Addition(int A, int B, int C)   //Addition@3ii
        {
            return A+B+C;
        }
};

int main()
{
    Demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.90,11.99)<<"\n";
    cout<<obj.Addition(10,11,20)<<"\n";

    return 0;
}



/*
    void Fun(int A, int B);           fun@2ii
    void Fun(int A, int B, int C);      fun32ii

 void Fun(int A, int B);                fun@2ii
    void Fun(float A, int B, floatC);     fun@2ff

void Fun(int A, float B, double c);      fun@3ifd
    void Fun(float A, int B, floatC);     fun@3dfi

    void 

*/