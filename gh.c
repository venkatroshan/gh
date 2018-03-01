#include<stdio.h>
int main()
{
int a[10],i,j,n,temp;
printf("enter limits");
scanf("%d",&n);
printf(" enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("sort array");
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
