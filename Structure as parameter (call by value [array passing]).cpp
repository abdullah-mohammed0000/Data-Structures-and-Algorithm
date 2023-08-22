#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
int A[5];
int n;
};
void area(struct rectangle p){
  p.A[0]=20;
  p.n=6090;

    for(int i=0;i<5;i++)
        cout<<p.A[i]<<endl;
}
int main()
{
    struct rectangle r={{2,4,6,8,10},5};
   area(r);

}
