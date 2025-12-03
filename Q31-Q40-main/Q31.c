//Write a program to take a number as input and print its equivalent binary representation
#include<stdio.h>
int main(){
int num,i,j,bin[32];
printf("Enter the number\n");
scanf("%d",&num);
if(num==0){
printf("Binary representation: 0\n");
return 0;
}
i=0;
while(num>0){
bin[i]=num%2;
num=num/2;
i++;
}
for(j=i-1;j>=0;j--){
printf("%d",bin[j]);
}
printf("\n");
return 0;
}

