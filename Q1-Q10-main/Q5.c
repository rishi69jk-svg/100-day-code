//Write a program to convert temperature from Celsius to Fahrenheit
#include<stdio.h>
int main(){
int c,f;
printf("Enter the temperature\n");
scanf("%d",&c);
f=(c*9/5)+32;
printf("Fahrenheit= %d\n",f);
return 0;
}
