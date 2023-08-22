#include<bits/stdc++.h>
using namespace std;

struct rectangle{
int length;
int breadth;

};
void initializer(struct rectangle *r,int l, int b){
r->length=l;
r->breadth=b;

}
int area(rectangle r){
return r.length*r.breadth;
}
int perimeter(rectangle r){
return 2*(r.length+r.breadth);
}

int main(){

rectangle r={0,0};
int l,b;
cin>>l>>b;
initializer(&r,l,b);
int a = area(r);
int p = perimeter(r);
cout<<"Area is : "<<a<<endl<<"Perimeter is : "<<p<<endl;



}
