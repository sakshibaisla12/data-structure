#include<stdio.h>
int main(){
int a[3],b[3],c[6],i,j,k=0;
printf("enter the elements of set A\n");
for(i=0;i<3;i++)
{
printf("enter the element");
scanf("%d",&a[i]);
}
printf("enter the elements of set B\n");
for(j=0;j<3;j++)
{
printf("enter the element");
scanf("%d",&b[j]);
}
for(i=0;i<3;i++)
{
   c[i]=a[i];
}
for(j=0;j<3;j++){
    c[3+j]=b[j];
}
printf("the Union of two sets is\n");
for(i=0;i<6;i++)
{
    k=0;
    for(j=i+1;j<6;j++)
    {

        if(c[i]==c[j])
        {
            k=1;
            break;
        }
}
if(k==0)
{
    printf("%d\n",c[i]);
}
}
return 0;
}
