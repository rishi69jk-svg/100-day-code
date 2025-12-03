//Write a program to check if a number is a strong number
#include<stdio.h>
int fac(int n){
int i,fact=1;
for(i=1;i<=n;i++){
fact=fact*i;
}
return fact;
}
int main(){
int num,t,d,sum=0;
printf("Enter the number\n");
scanf("%d",&num);
t=num;
while(num>0){
d=num%10;
sum=sum+fac(d);
num=num/10;
}
if(sum==t)
printf("Strong number\n");
else
printf("Not a Strong number\n");
return 0;
}

