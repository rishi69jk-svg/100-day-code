//Write a program to print the sum of first n odd numbers
#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2!=0){
sum=sum+i;
}
}
printf("Sum= %d\n ",sum);
return 0;
}

