#include<stdio.h>
int main()
{
    int n,i,s,j,a[10];
    printf("NAME=sakshi\n");
    printf("Roll no =2100321530138\n");
    printf("enter the size ");
    scanf("%d",&s);
    printf("enter the number ");
    for(i=0;i<=s-1;i++)
        scanf("%d",&a[i]);
    printf("enter the no to be searched ");
    scanf("%d",&n);
    for(j=0;j<=s-1;j++)
        if(a[j]==n)
        break;

if(j<s)
printf("number found at position : %d\n",j+1);
else
printf("number not found\n");
return 0;
}
