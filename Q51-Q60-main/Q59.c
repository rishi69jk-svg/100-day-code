//Count even and odd numbers in an array
#include<stdio.h>
int main(){
int n,i,ec=0,oc=0;
printf("Enter the value of n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
if(arr[i]%2==0)
ec++;
else
oc++;
}
printf("Even count= %d\n",ec);
printf("Odd count= %d\n",oc);
return 0;
}



