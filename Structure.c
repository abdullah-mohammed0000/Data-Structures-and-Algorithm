#include<stdio.h>
struct student{
int roll;
char name[30];
char dept[10];
char address[50];


};
int main(){

struct student abdullah={105,"abdulah","cse","kumarpara"};
printf("%s",abdullah.name);


}
