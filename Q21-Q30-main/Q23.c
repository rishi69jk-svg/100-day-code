//Write a program to calculate a library  fine based on late days 
#include<stdio.h>
int main(){
int d,fine=0;
printf("Enter the number of late days\n");
scanf("%d",&d);
if(d<=0)
printf("No fine\n");
else if(d<=5){
fine=d*1;
printf("Fine= Rs %d\n",fine);
}
else if(d<=10){
fine=d*2;
printf("Fine= Rs %d\n",fine);
}
else if(d<=30){
fine=d*5;
printf("Fine= Rs %d\n",fine);
}
else
printf("Membership is cancelled due to late payment\n");
return 0;
}

