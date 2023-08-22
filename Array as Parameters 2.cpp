#include<iostream>
#include<stdio.h>
using namespace std;
int * fun(int size)
{
    int *p,i;
    p=(int *)malloc(size* sizeof(int));
    for( i=0; i<size;i++)
        {p[i]=i+1;}
    return p;
}
int main()
{
    int *ptr,sz=7,i;
    ptr=fun(sz);
    for(int i=0;i<sz;i++)
        {cout<<ptr[i]<<" ";}
}

