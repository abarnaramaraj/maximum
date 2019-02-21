#include<stdio.h>
int largest(int arr[],int n)
{
int i;
int max=arr[0];
for(i=1;i<=n;i++)
if(arr[i]<max)
max=arr[i];
return max;
}
int main()
{
int arr[]={10,36,87,98}
int n=size of (arr)/size of(arr[0]);
printf(largest in array is %d",largest(arr,n));
return 0;
}
}
