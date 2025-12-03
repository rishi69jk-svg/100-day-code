//Write a program to print all the prime numbers from 1 to n
#include<stdio.h>
int main(){
int i,n,j;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n;i++){
int c=0;
for(j=1;j<=n;j++){
if(i%j==0)
c++;
}
if(c==2)
printf("%d",i);
}
printf("\n");
return 0;
}
