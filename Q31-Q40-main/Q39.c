//Write a program to find the product of odd digits of a number
#include<stdio.h>
int main(){
int n,d,c=0,p=1;
printf("Enter the number\n");
scanf("%d",&n);
while(n>0){
d=n%10;
if(d%2!=0){
p=p*d;
c++;
}
n=n/10;
}
if(c==0)
printf("Product is: 0\n");
else
printf("Product is: %d\n",p);
return 0;
}

