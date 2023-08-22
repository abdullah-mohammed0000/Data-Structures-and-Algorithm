#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int mwap(int &x,int &y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
}

int main()
{
 int a=10,b=20;
  mwap(a,b);
  printf("%d%d",a,b);

}

/*int mwap(int &x,int *y)
{
   int temp;
   temp=x;
   x=*y;
   *y=temp;
}

int main()
{
 int a=10,b=20;
  mwap(a,&b);
  printf("%d%d",a,b);

}
*/
