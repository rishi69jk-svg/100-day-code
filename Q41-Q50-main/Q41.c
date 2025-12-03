//Write a program to swap the first and last digit of a number
#include<stdio.h>
int main(){
int n,ld,fd,snum,t,placevalue=1;
printf("Enter the number\n");
scanf("%d",&n);
if(n<10){
printf("Swapped number: %d\n",n);
return 0;
}
t=n;
ld=n%10;
while(n>=10){
n=n/10;
placevalue=placevalue*10;
}
fd=n;
snum=t%placevalue;
snum=snum/10;
snum=(ld*placevalue)+(snum*10)+fd;
printf("Swapped number is: %d\n",snum);
return 0;
}
