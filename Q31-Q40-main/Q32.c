//Write a program to check if a number is a palindrome
#include<stdio.h>
int main(){
int i,r=0,d,num,t;
printf("Enter the number\n");
scanf("%d",&num);
t=num;
while(num>0){
d=num%10;
r=r*10+d;
num=num/10;
}
if(r==t){
printf("Palindrome number\n");
}
else{
printf("Not Palindrome number\n");
}
return 0;
}

