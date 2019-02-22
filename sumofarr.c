#include<stdio.h>
int main(void)
{
int arr[25];
int sum=0;
int i,n,x;
scanf("%d",&x);
scanf("%d",&n);
for(i=1;i<=x;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<=n;i++)
{
sum=sum+arr[i];
}
printf("%d",sum);
return 0;
}
