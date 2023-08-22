#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};

struct rectangle *fun(){
    struct rectangle *p;
    p=new rectangle;
    //p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->length=15;
    p->breadth=25;

    return p;
}

int main()
{
    struct rectangle *ptr=fun();
    cout<<"length  "<<ptr->length<<endl<<"Breadth "<<ptr->breadth;
}
