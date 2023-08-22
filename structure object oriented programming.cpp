#include<iostream>
using namespace std;
struct rectangle{
int length;
int breadth;


void initializer(int l, int b){
length=l;
breadth=b;

}
int area(){
return length*breadth;
}
int perimeter(){
return 2*(length+breadth);
}
};
int main(){

rectangle r={0,0};
int l,b;
cin>>l>>b;
r.initializer(l,b);
int a = r.area();
int p = r.perimeter();
cout<<"Area is : "<<a<<endl<<"Perimeter is : "<<p<<endl;



}




