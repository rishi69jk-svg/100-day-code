//Write a program to find the HCF (GCD) of two numbers
#include<stdio.h>
int main(){
int n1,n2,t;
printf("Enter two numbers\n");
scanf("%d %d",&n1,&n2);
while(n2!=0){
t=n2;
n2=n1%n2;
n1=t;
}
printf("HCF is : %d\n",n1);
return 0;
}
