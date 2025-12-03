//Write a program to classify a triangle as Equilateral,Isosceles or Scalene based on its side lengths
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the sides of the triangle\n");
scanf("%d %d %d",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a){
if(a==b && b==c){
printf("Equilateral Triangle \n");
}
else if(a==b ||b==c||c==a){
printf("Isosceles Triangle \n");
}
else
printf("Scalene Triangle \n");
}
else
printf("The given do not form a triangle \n");
return 0;
}
