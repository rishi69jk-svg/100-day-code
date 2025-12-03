//Write a program to calculate Simple Interest and Compound Interest for given principal ,rate and time 
#include<stdio.h>
#include<math.h>
int main(){
int p,r,t;
float s,c;
printf("Enter the principal , rate and time\n");
scanf("%d%d%d",&p,&r,&t);
s=(p*r*t)/100.0;
c=p*pow((1.0+(r/100.0)),t)-p;
printf("Simple Interest= %.2f, Compound Interest= %.2f\n",s,c);
return 0;
}

