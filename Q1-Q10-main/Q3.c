//Write a program to calculate the area and perimeter of a rectangle given its length and breadth 
#include<stdio.h>
int main(){
int l,b,a,p;
printf("Enter the length and breadth\n");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("Area= %d, Perimeter= %d\n",a,p);
return 0;
}
