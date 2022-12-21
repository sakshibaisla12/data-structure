#include<stdio.h>
int main (){
int a[5],i,size,n,item,pos;
printf("enter the size");
scanf("%d",&n);
printf("enter the number of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("insert enter the number");
scanf("%d",&item);
printf("enter the first position");
scanf("%d",&pos);
for(i=n;i>pos;i--)
    a[i+1]=a[i];
    a[pos]=item;
printf("new array is position");

for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
}
