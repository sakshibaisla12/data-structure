# include<stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3],i,j;
printf("NAME=sakshi\n");
printf("Roll no =2100321530138\n");
printf("enter your value in matrics ");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d",&a[i][j]);
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("enter your value in matrics");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
scanf("%d",&b[i][j]);
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
printf("\n");

}
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
c[i][j]=a[i][j]+b[i][j];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf(" %d\t",c[i][j]);
printf("\n");
}}




