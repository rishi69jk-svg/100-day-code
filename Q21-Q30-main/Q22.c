//Write a program to find profit or loss percentage given cost price and selling price
#include<stdio.h>
int main(){
float cp,sp,p,loss,per;
printf("Enter the cost price and the selling price :\n");
scanf("%f %f ",&cp,&sp);
if(sp>cp){
p=sp-cp;
per=(p/cp)*100;
printf("Profit =%.2f\n",p);
printf(Profit percentage= %.2f\n ",per);
}
else if(cp>sp){
loss=cp-sp;
per=(loss/cp)*100;
printf("Loss = %.2f\n",loss);
printf("Loss percentage = %.2f \n",per);
}
else{
printf("No profit , no loss\n");
}
return 0;
}

