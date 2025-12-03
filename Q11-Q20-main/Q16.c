//Write a program to input three numbers and find the largest among them using if-else
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
printf("Largest number %d\n",a);
else if(b>=c && b>=a)
printf("Largest number %d\n",b);
else
printf("Largest number %d\n ",c);
return 0;
}

