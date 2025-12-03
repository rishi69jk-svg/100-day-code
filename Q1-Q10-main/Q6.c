//Write a program to swap two numbers using a third variable
#include<stdio.h>
int main(){
int a,b,t;
printf("Enter the numbers\n");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d %d\n",a,b);
return 0;
}

