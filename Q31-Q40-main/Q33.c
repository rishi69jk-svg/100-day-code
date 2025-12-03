//Write a program to check if a number is an Armstrong number
#include<math.h>
#include<stdio.h>
int main(){
int num,t,d,c=0,res=0;
printf("Enter the number\n");
scanf("%d",&num);
t=num;
while(t!=0){
t=t/10;
c++;
}
t=num;
while(t!=0){
d=t%10;
res=res+(int)pow(d,c);
t=t/10;
}
if(res==num)
printf("Armstrong number\n");
else
printf("Not an Armstrong number\n");
return 0;
}

