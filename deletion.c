/*#include<stdio.h>
int main (){
int a[5],i,size,n1,pos;
printf("enter the size");
scanf("%d",&size);
printf("enter the number of array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the  position");
scanf("%d",&pos);
for(i=pos-1;i<=size;i++)
    a[i]=a[i+1];
printf("new array is position");
for(i=0;i<size-1;i++)
    printf("%d",a[i]);}
*/
#include <stdio.h>

int main(void) {
int s,r;
scanf("%d",&s);
for(int i=0;i<s;i++){
    int a,b,p;
    scanf("%d%d%d",&a,&b,&p);
    r=(a*5+b*10)/p;
    printf("%d",r);
}
	return 0;
}
