#include<stdio.h>
#include<conio.h>
void main(){
const float pi=3.14;
int a;
float b;
clrscr();
printf("enter the value of radius : ");
scanf("%d",&a);
b=pi*a*a;
printf("area of circle is: %f",b);
getch();
}