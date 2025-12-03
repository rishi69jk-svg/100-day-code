//Write a program to calculate the factorial of a number
#include<stdio.h>
int main(){
int n,i,f;
printf("Enter a number\n");
scanf("%d",&n);
if(n<0){
printf("Factorial of negative number does not exist\n");
}
else{
for(i=1;i<n;i++){
f=f*i;
}
printf("Factorial= %d\n",f);
}
return 0;
}
