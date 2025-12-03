//Write a program to assign grades based on a percentage input
#include<stdio.h>
int main(){
float p;
printf("Enter the percentage\n");
scanf("%f",&p);
if(p>=90)
printf("Grade: A\n");
else if(p>=80)
printf("Grade: B\n");
else if(p>=70)
printf("Grade: C\n");
else if(p>=60)
printf("Grade: D\n");
else
printf("Grade: F\n");
return 0;
}

