#include<iostream>
using namespace std;

class rectangle{
private:
    int a;
    int b;
public:
    rectangle(int a, int b);
    int add();
    int sub();
};
rectangle::rectangle(int a, int b){
this->a=a;
this->b=b;
}
int rectangle::add(){
int c;
c = a+b;
return c;
}
int rectangle::sub(){
int c;
c = a-b;
return c;
}
int main(){
rectangle r(10,5);
cout<<r.add()<<endl;
cout<<r.sub()<<endl;
}




