//Write a program to find LCM of two numbers
#include<stdio.h>
int main(){
int n1,n2,gcd,lcm,t,a,b;
printf("Enter the two numbers\n");
scanf("%d%d",&n1,&n2);
a=n1;
b=n2;
while(b!=0){
t=b;
b=a%t;
a=t;
}
gcd=a;
lcm=(n1*n2)/gcd;
printf("LCM is: %d\n",lcm);
return 0;
}
