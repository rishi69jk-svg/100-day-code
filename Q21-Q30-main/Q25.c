//Write a program to implement a basic calculator using switch -case for +,*,%,-,/.
#include<stdio.h>
int main(){
int num1,num2,r;
char op;
printf("Enter two numbers and the operator\n");
scanf("%d %d %c",&num1,&num2,&op);
switch(op){
case'+':
r=num1+num2;
printf("%d\n",r);
break;
case'-':
r=num1-num2;
printf("%d\n",r);
break;
case'/':
if(num2==0 || num1==0)
printf("0\n");
else{
r=num1/num2;
printf("%d\n",r);
}
break;
case'*':
r=num1*num2;
printf("%d\n",r);
break;
case'%':
if(num2==0 ||num1==0)
printf("0\n");
else{
r=num1%num2;
printf("%d\n",r);
}
break;
default:
printf("Entered wrong operator\n");
}
return 0;
}
