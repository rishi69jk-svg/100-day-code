//Write a program to find an quadratic equation and categorize them
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,r1,r2,realpart,imgpart;
printf("Enter the values of a,b and c \n");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
if(a==0)
printf("This is not a quadratic equation ");
else{
d=(b*b)-(4*a*c);
if(d>0){
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("Roots are real and distinct : %.2f and %.2f \n",r1,r2);
}
else if(d==0){
r1=r2=-b/(2*a);
printf("Roots are real and distinct : %.2f and %.2f \n",r1,r2);
}
else{
realpart=-b/(2*a);
imgpart=sqrt(-d)/(2*a);
printf("Roots are complex and imaginary: %.2f +%.2f and %.2f -%.2f\n",realpart,imgpart,realpart,imgpart);
}
}
return 0;
}
