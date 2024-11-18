#include<iostream>
using namespace std;

int main()
{
    int Arr[5]; //static memory

    int *ptr = NULL;

    //step 1 : Allocate the memory
    ptr = new int[5];
    // ptr = (int *)malloc(5 * sizeof(int));   c language syntax

    //step 2: use the memory
    //LOGIC

    //step 3: Deallocate the memory
    delete []ptr;

    return 0;
}