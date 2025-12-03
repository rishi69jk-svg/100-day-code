//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include<stdio.h>
int main(){
int h,m,s,t;
printf("Enter the time\n");
scanf("%d",&t);
h=t/3600;
m=(t%3600)/60;
s=t%60;
printf("%d:%d:%d \n",h,m,s);
return 0;
}

