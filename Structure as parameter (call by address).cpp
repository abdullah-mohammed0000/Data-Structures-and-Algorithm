#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
int length;
int breadth;
};
void area(struct rectangle *p)
{
    p->length=20;

    cout<< p->length*p->breadth<<endl;

}
int main()
{
    struct rectangle r={10,5};
    area(&r);
    cout<<r.length*r.breadth;
}

