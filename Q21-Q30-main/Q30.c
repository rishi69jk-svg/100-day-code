//Write a program to reverse a given number
#include<stdio.h>
int main(){
int n,i,d,r=0;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<n;i++){
d=n%10;
r=r*10+d;
n=n/10;
}
printf("Reverse number=%d\n",r);
return 0;
}

