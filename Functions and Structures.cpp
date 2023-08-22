#include<bits/stdc++.h>
using namespace std;
struct rectangle{
int length;
int breadth;
};

int area(struct rectangle r){
return r.length*r.breadth;

}
int perimeter(struct rectangle r){
return 2*(r.length+r.breadth);
}

int main(){
struct rectangle r ={0,0};
cin>>r.length>>r.breadth;
int a = area(r);
int p = perimeter(r);
 cout<<"Area is : "<<a<<endl<<"Perimeter is : "<<p<<endl;

}
