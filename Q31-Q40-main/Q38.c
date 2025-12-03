//Write a program to find the sum of digits of a number
#include<stdio.h>
int main(){
int n,sum=0,d;
printf("Enter the number\n");
scanf("%d",&n);
while(n!=0){
d=n%10;
sum=sum+d;
n=n/10;
}
printf("Sum is: %d\n",sum);
return 0;
}


