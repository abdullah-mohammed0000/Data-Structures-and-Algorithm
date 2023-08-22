#include<iostream>
using namespace std;
template<class T>
class rectangle{
private:
    T a;
    T b;
public:
    rectangle(T a, T b);
    T add();
    T sub();
};
template<class T>
rectangle<T>::rectangle(T a, T b){
this->a=a;
this->b=b;
}
template<class T>
T rectangle<T>::add(){
T c;
c = a+b;
return c;
}
template<class T>
T rectangle<T>::sub(){
T c;
c = a-b;
return c;
}
int main(){
//rectangle<float> r(10.5,5.77);
//cout<<r.add()<<endl;
//cout<<r.sub()<<endl;

rectangle<char> r('B','A');
cout<<(int)r.add()<<endl;
cout<<(int)r.sub()<<endl;
}




