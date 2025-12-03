//Write a program to check if a number is prime
#include<stdio.h>
int main(){
int n,i,c=0;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0)
c++;
}
if(c==2)
printf("Prime number\n");
else
printf("Not a Prime number\n");
return 0;
}

