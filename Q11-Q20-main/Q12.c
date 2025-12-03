//Write a program to input an integer and check whether it is positive ,
// negative or zero using nested if-else
#include<stdio.h>
int main(){
int n;
printf("Enter the number\n");
scanf("%d",&n);
if(n<0)
printf("Negative\n");
else if(n==0)
printf("Zero\n");
else
printf("Positive\n");
return 0;
}

