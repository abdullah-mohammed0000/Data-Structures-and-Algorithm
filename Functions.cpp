#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
/*void add(int a,int b)
{
    int c;
    c=a+b;
printf("%d",c);
}

int main(){
int x=10,y=15,sum;
add(x,y);
//sum=add(x,y);
//printf("%d",sum);
}*/
int add(int a,int b)
{
    int c;
    c=a+b;
return c;
}

int main(){
int x=10,y=15,sum;
sum=add(x,y);
printf("%d",sum);
}

