#include<stdio.h>
int main()
{
    int a[100],i,n,t,j;
    printf("enter the no.of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {

        for(i=0;i<n-1;i++)
        {
           if(a[i]>a[i+1])
            {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            }}}
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
}
