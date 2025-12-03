//Write a program to find the 1's complement of a binary number and print it
#include<stdio.h>
int main(){
char bin[100];
int i=0;
printf("Enter the  binary number\n");
scanf("%s",bin);
while(bin[i]!='\0'){
if(bin[i]=='0')
printf("1");
else if(bin[i]=='1')
printf("0");
else{
printf("Invalid binary number\n");
return 1;
}
i++;
}
printf("\n");
return 0;
}

