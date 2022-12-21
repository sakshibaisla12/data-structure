
#include<stdio.h>
int main (){
int a[5],i,num;
printf("enter the number");
scanf("%d",&num);
printf("enter the number of array");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
printf("element of array is");
for(i=0;i<num;i++)
printf("%d\n",a[i]);
}
