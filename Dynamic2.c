#include<stdio.h>
#include<stdlib.h> //standard library

int main()
{
    int *ptr = NULL;

//step 1 :  Allocate the memory
    ptr = (int *) malloc(5 * sizeof(int));

//step 2 : use the memory
//LOGIC

//step 3 : Deallocate the memory
free(ptr);

    return 0;
}