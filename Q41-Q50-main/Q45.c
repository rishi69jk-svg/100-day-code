//Write a program to print the sum of the series: 2/3+4/7+6/11+8/15+ ...up to n terms
#include<stdio.h>
int main(){
int i,n,num,dem;
float sum=0.0;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
num=2*i;
dem=(4*i)-1;
sum=sum+(float)num/dem;
}
printf("Sum of the series is: %.2f\n",sum);
return 0;
}

