/*# include<stdio.h>
int main(){
int a,b,c;
printf("input the three number");
scanf("%d%d%d",&a,&b,&c);
if(a>c)
{
    if(a>b)
   printf("a is greater");
   else
    printf("b is greater");
}
    else
{
    if(b>c)
        printf("b is grater");
    else
        printf("c is greater");
}
    if(b==c)
   printf("sucess!");

return 0;
}*/

//---------2
/*#include<stdio.h>
int main(){
int a[10],i,max=a[1];
printf("enter the number of array");
for(i=1;i<6;i++){
scanf("%d",&a[i]);
}
for(i=1;i<6;i++){
printf("%d\t",a[i]);
}
for(i=1;i<6;i++){
    if(a[i]>max){
        max=a[i];
  }  }
printf(" max number is %d\n",max);
}*/

/*# include<stdio.h>
int chocolates(int a[], int l,int r);
int main(){
int arr[10],i,p,n;

scanf("%d",&n);
for(i=1;i<n;i++){
scanf("%d\t",&arr[i]);
}
chocolates(arr,n,i);
}
int chocolates(int a[], int l,int r) {
int max=a[1];
for(r=1;r<l;r++){
    if(a[r]>max){
        max=a[r];
  }  }
  printf("%d\t",max);
}*/
// minimum number is
/*#include<stdio.h>
int main(){
int a[10],i,min=a[0];
printf("enter the number of array");
for(i=0;i<6;i++){
scanf("%d",&a[i]);
}
for(i=0;i<6;i++){
printf("%d\t",a[i]);
}
for(i=0;i<6;i++){
    if(a[i]<=min){
        min=a[i];
      }
  }
printf(" min number is %d\n",min);
}
*/
// delete duplicate element in sorted array
/*#include<stdio.h>
int main(){
int a[10],i,eq=a[0];
printf("enter the number of array");
for(i=0;i<6;i++){
scanf("%d",&a[i]);
  }
for(i=0;i<6;i++){
   if(a[i]==a[i+1]){
        a[i]=a[i+1];
}
else{
    printf("%d",a[i]);
}
}
}*/
//deleted the duplicate element in unsorted array
/*#include<stdio.h>
int main(){
int a[10],i,j,k,n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the number of array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
        for(k=j;k<n;k++){
            a[k]=a[k+1];
        }
      n--;
      j--;
}
     }
}
printf("after remove the duplicate element ");
for(i=0;i<n;i++){
printf("%d",a[i]);
}
}
*/








