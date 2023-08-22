#include<iostream>
using namespace std;

int area(int length, int breadth){
return length*breadth;
}

int perimeter(int length, int breadth){
return 2*(length+breadth);
}

int main()
{
    int length=0, breadth=0;
    cin>>length>>breadth;
    int a=area(length,breadth);
    int p=perimeter(length,breadth);
    cout<<"Area is : "<<a<<endl<<"Perimeter is : "<<p<<endl;
}
