#include<stdio.h>
#include<stdlib.h> //standard library

int main()
{
    int *ptr = NULL;

//step 1 :  Allocate the memory
    ptr = (int *) malloc(5 * sizeof(int));

ptr = (int *)realloc(ptr,7 * sizeof(int)); // case1 :here increase the sizeof memory

ptr = (int *)realloc(ptr,3 * sizeof(int));  //case2 here drcrease the sizeof memory


ptr = (int *)realloc(NULL, 5 * sizeof(int)); //works like malloc

ptr = (int *)realloc(ptr,0);  //work like free

    return 0;
}