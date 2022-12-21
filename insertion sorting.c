#include<stdio.h>
int main (){
int i,j=2,a[10],n,key;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the value of in array");
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
for(j=2;j<=n;j++){
key=a[j];
i=j-i;
}
if(a[i]>key){
    for(i=1;i<=n;i++){
    a[i+i]=a[i];
    i=i-1;
   a[i+1]=key;
    }}
printf("%d",a[i]);
}
