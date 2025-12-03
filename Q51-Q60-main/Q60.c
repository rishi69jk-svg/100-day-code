//Count positive , negative and zero elements in an array 
#include<stdio.h>
int main(){
int i,n,cp=0,zc=0,nc=0;
printf("Enter the value of n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
if(arr[i]>0)
cp++;
else if(arr[i]<0)
nc++;
else
zc++;
}
printf("Positive count= %d\n",cp);
printf("Negative count= %d\n",nc);
printf("Zero count= %d\n",zc);
return 0;
}

