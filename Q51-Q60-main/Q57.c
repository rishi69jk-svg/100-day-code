//Find the sum of array elements
#include<stdio.h>
int main(){
int sum=0,i,n;
printf("Enter the value of n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
sum=sum+arr[i];
}
printf("Sum: %d\n",sum);
return 0;
}

