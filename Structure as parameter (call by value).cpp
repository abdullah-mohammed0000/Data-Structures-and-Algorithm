#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
int length;
int breadth;
};
int area(struct rectangle p)
{  return p.length*p.breadth;

}
int main()
{
    struct rectangle r={10,5};
    cout<<area(r);
}
