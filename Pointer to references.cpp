#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
int length;
int breadth;
};
int main(){
 /*struct Rectangle r={10,15};*/
 struct Rectangle *p;
 /*p=(struct Rectangle *)malloc(sizeof (struct Rectangle));*/
p= new Rectangle;
 /*cout<<(*p).length<<endl;
 cout<<(*p).breadth<<endl;*/
p->length=15;
p->breadth=10;
 cout<<p->length<<endl;
 cout<<p->breadth<<endl;

 /*cout<<r.length<<endl;
 cout<<r.breadth<<endl;*/


 }
