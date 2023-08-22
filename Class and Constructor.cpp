//In full c++
#include<iostream>
using namespace std;
class rectangle{
private:
    int length;
    int breadth;

public:
    rectangle(){
    length=1;
    breadth=1;
    }
    rectangle(int l, int b);
    int area();
    int perimeter();

    int getlength(){
    return length;
    }
int setlength(int l){
length = l;
}

~rectangle();
};
rectangle:: rectangle(int l , int b){
length =l;
breadth =b;
}
int rectangle::area(){
return length*breadth;
}
int rectangle::perimeter(){
return 2*(length+breadth);
}
rectangle::~rectangle(){

}

int main()
{


   rectangle r(10,5);
   cout<<r.area()<<endl;
   cout<<r.perimeter()<<endl;
   r.setlength(20);
   cout<<r.getlength()<<endl;

}



