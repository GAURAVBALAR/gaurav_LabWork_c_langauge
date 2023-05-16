#include<stdio.h>
#include<conio.h>
void main(){
int a;
int b;
int c;
const float d=0.01;
float e;
clrscr();
printf("enter the value of principle");
scanf("%d",&a);
printf("enter the value of rate");
scanf("%d",&b);
printf("enter the value of time");
scanf("%d",&c);
e=a*b*c*d;
printf("Value of the simple interest is : %f",e);
getch();
}
