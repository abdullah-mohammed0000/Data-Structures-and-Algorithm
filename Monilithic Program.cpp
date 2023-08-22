#include<iostream>
using namespace std;
int main()
{
    int length=0;
    int breadth=0;
    cout<<"Enter the length and breadth"<<endl;
    cin>>length>>breadth;
    int area = length*breadth;
    int perimeter = 2*(length+breadth);
    cout<<"Area: "<<area<<endl<<"Breadth: "<<perimeter;
}
