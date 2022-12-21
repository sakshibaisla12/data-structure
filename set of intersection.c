#include<stdio.h>
int main(){
int a[3],b[3],c[6],i,j,k;
printf("enter the elements of set A ");
for(i=0;i<3;i++)
scanf("%d",&a[i]);
printf("enter the elements of set b ");
for(j=0;j<3;j++)
scanf("%d",&b[j]);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i]==b[j])
{
    c[k]=a[i];
    k++;
}
}
}
printf("set of intersection");
for(i=0;i<k;i++)
printf("%d",c[i]);

}
