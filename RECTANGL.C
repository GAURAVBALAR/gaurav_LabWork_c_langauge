#include<stdio.h>
#include<conio.h>
void main(){
int a;
int b;
int c;
clrscr();
printf("enter the value of length : ");
scanf("%d",&a);
printf("enter the value of width : ");
scanf("%d",&b);
c=a*b;
printf("The area of rectangle is : %d",c);
getch();
}