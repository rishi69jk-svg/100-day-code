//Write a program to input two numbers and display thier sum,difference,product and quotient 
#include<stdio.h>
int main(){
int a,b,sum,diff,p,q;
printf("Enter the numbers \n");
scanf("%d %d",&a,&b);
sum=a+b;
diff=a-b;
p=a*b;
if(a==0||b==0)
q=0;
else
q=a/b;
printf("Sum= %d, Diff= %d, Product= %d, Quotient= %d \n",sum,diff,p,q);
return 0;
}

