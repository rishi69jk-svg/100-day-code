//Write a program to check if a number is a perfect number 
#include<stdio.h>
int main(){
int sum=0,i,num;
printf("Enter the number\n");
scanf("%d",&num);
if(num<=0){
printf("Not a perfect number\n");
return 0;
}
for(i=1;i<=num/2;i++){
if(num%i==0){
sum=sum+i;
}
}
if(sum==num)
printf("Perfect number\n");
else
printf("Not a perfect number\n");
return 0;
}

