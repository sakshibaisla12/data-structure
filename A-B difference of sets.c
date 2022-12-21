#include<stdio.h>
int main(){
int a[10],b[10],c[10],k=0,n1,n2,i,j;
printf("enter the size of array");
scanf("%d",&n1);
printf("enter the element in array");
for(i=0;i<n1;i++){
scanf("%d",&a[i]);
}
printf("enter the size of array");
scanf("%d",&n2);
printf("enter the element of array");
for(j=0;j<n2;j++){
scanf("%d",&b[j]);
}
printf("difference of sets\n");
for(i=0;i<n1;i++){
k=0;
for(j=0;j<n2;j++)
{
if(a[i]==b[j]){
k=k+1;
break;
}
}
if(k==0)
{
        printf("%d\t",a[i]);
        }
}
}
