#include<iostream>
#include<stdio.h>
using namespace std;
void fun(int A[], int n)
{
    int i;
    A[0]=25;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }
}
int main()
{
    int A[5]={2,4,6,8,10};
    fun(A,5);
}
