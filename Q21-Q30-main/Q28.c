//Write a program to print the product of even numbers from 1 to n
#include<stdio.h>
int main(){
int p=1,i,n;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1;i<n;i++){
if(i%2==0){
p=p*i;
}
}
printf("Product= %d\n",p);
return 0;
}

