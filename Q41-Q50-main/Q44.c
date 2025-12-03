//Write a program to find the sum of the series 1+3/4+5/6+7/8+ ...up to n terms
#include<stdio.h>
int main(){
int n,i,num,dem;
float sum=0.0;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
num=(2*i)-1;
dem=(2*i);
sum=sum+(float)num/dem;
}
printf("Sum of the series is: %.2f\n",sum);
return 0;
}

