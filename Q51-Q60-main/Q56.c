//Read and print elements of a one-dimensional array
#include<stdio.h>
int main(){
int n,i;
printf("Enter the value of n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array \n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Printing the array elements \n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}


