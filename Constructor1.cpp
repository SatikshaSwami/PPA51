#include<iostream>

using namespace std;

class Marvellous
{
    public:
        int No1;
        int No2;

        Marvellous()
        {
            cout<<"Inside default Constructor\n";
            No1 = 0;
            No2 = 0;
        }

        Marvellous(int A, int B)
        {
            cout<<"Inside parameterised constructor\n";
            No1 = A;
            No2 = B;
        }

        ~Marvellous()
        {
            cout<<"Inside Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};
int main()
{
    //Marvellous obj;
    Marvellous mobj1;   
    Marvellous mobj2(11,21);

   // mobj.Fun();

    return 0;
}