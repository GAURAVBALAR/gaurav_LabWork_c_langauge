#include<stdio.h>
#include<conio.h>
void main(){
int a;
int b;
const float c=0.5;
int d;
clrscr();
printf("enter the value of height : ");
scanf("%d",&a);
printf("enter the value of breadth : ");
scanf("%d",&b);
d=c*a*b;
printf(" the area of recatangle : %f",d);
getch();
}