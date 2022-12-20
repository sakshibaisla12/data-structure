
 // day 1
//Q.1
/*#include<stdio.h >
int main()
{
    int basic_salary,hra,allow,da,pf,total_salary;
     printf("enter the basic salary");
     scanf("%d",&basic_salary);
     hra=20/100;
     da=50/100;
     pf=11/100;


}
*///Q.2
/*#include<stdio.h >
int main()
{
    int a[10],i,max=a[1];
    printf("enter the value of");
    for(i=0;i<3;i++){
    scanf("%d",&a[i]);
}
for(i=1;i<3;i++){
if(a[i]>max){
    max=a[i];
}
}
printf("max value is %d",max);
}
*/
//day 7 # string.c
//Q.2
/*#include<stdio.h>
#include<string.h>
int main(){
char s[10],p;
int l,i;
printf("enter the string ");
gets(s);
for(l=0;s[l];l++);
for(i=0;i<l/2;i++){
    p=s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=p;
}
printf("reverse string is <<->> %s",s);
}*/
/*
int main(){
char s[10],rev[10];
int l,i,j=0;
printf("enter the string ");
gets(s);
l=strlen(s);
for(i=l-1;i>=0;i--){
    rev[j++]=s[i];
}
printf("reverse string is ......>>>");
puts(rev);
}*/
//Q.1
/*#include<stdio.h>
int main(){
int a[10],i,n,s,j=n,g,mid;
float p;
printf("enter the size");
scanf("%d",&n);
printf("enter the sorted array");
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
if(n%2==0){
        i++;
        j--;
       if(j==i){
       p=(a[i]+a[j])/2;
       }
     printf("%f",p);
       }
else
{
    s=1;
    g=n;
    mid=(s+g)/2;
   printf("%d\n",a[mid]);

 }
}*/
//##############################################-----DAY 6 ------##############################################
//Q.6(1)// matrics rotation at 90'
/*#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,sum;
printf("enter 9 number for the first matrix");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
      scanf("%d",&a[i][j]);
   }
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("rotates of a 90 degree\n");
for(i=0;i<=2;i++)
{
for(j=2;j>=0;j--)
printf("%d\t",a[j][i]);
printf("\n");
}
}*/
//(2)
// matrics rotation anticlockwise at 90'
/*#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("enter 9 number for the first matrix");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
      scanf("%d",&a[i][j]);
   }
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("anticlockwise rotate of a 90 degree\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",a[j][i]);
printf("\n");
}
}
*/
//(3) rotate a matrix 180 degree
/*#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("enter 9 number for the first matrix");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
      scanf("%d",&a[i][j]);
   }
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("anticlockwise rotate of a 90 degree\n");
for(i=2;i>=0;i--)
{
for(j=2;j>=0;j--)
printf("%d\t",a[i][j]);
printf("\n");
}
}
*///Q.4 magic matrix
/*#include<stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3],i,sum=0,j,row=0,dia=0,k=0;
printf("enter the element 1 of array");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
      scanf("%d",&a[i][j]);
   }
}
printf("sum of  diagonal of a matrix");
for(i=0;i<=2;i++){
dia=dia+a[i][i];
}
printf("%d...>>\n",dia);
for(j=0;j<=2;j++){
row=row+a[k][j];
}
printf(" sum of row %d...>>\n",row);
if(dia==row){
    printf("it is magic *** matrix\n");
}
else{
    printf("it is not a magic matrix\n");
}
}
*/
//Q.5 //(5)
// print spiral matrix ;
/*#include<stdio.h>
int main(){
int a[4][4],left=0,right=3,i,j,top=0,bottom=3;
printf("enter the element 1 of array");
for(i=0;i<=3;i++){
   for(j=0;j<=3;j++){
      scanf("%d",&a[i][j]);
   }
}
printf("  matrix is\n");
 for(i=0;i<=3;i++){
   for(j=0;j<=3;j++){
       printf("%d\t",a[i][j]);
   }
 printf("\n");
}
printf("\n spiral matrix is\n");
while(top<=bottom&&left<=right){
    for(int i=left;i<=right;i++){
        printf("%d\t",a[top][i]);
    }
    top++;
     for(int i=top;i<=bottom;i++){
        printf("%d\t",a[i][right]);
    }
   right--;
   if(top<=bottom){
    for(int i=right;i>=left;i--){
        printf("%d\t",a[bottom][i]);
    }
      bottom--;
   }
   if(left<=right){
    for(int i=bottom;i>=top;i--){
        printf("%d\t",a[i][left]);
    }
      left++;
   }
}
return 0;
}*/
//################################################-------DAY 5---####################################
//Q.7 reverse a element
/*#include<stdio.h>
int main(){
int a[10],n,i;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the element 1 of array");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
for(i=0;i<n;i++){
 printf("%d\t",a[i]);
}
printf("\n reverse the array\n");
for(i=n-1;i>=0;i--){
 printf("%d\t",a[i]);
}
}
*/
//Q.5
/*#include<stdio.h>
int main(){
int a[10],n,i;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the element 1 of array");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[i]%2!=0){
    printf("%d........",a[i]);
}
else{
    printf("%d\n",a[i]);
}
}
}*/
//Q.6
/*#include<stdio.h>
int main(){
int a[50],n,i,t;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("swap the alternate ");
for(i=0;i<n;i+=2){
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
}
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}*/
//Q.1
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
//Q.2(minimum)
/* minimum number is
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
}*/
//Q.4
/*#include<stdio.h>
int main(){
int a[10],i=0,n,sum=0,v=0;
float p;
printf("enter the number of array");
scanf("%d",&n);
printf("enter the size of array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
if(n%2==0){
  p=n/2;
 printf("%f\n",p);
for(i=0;i<p;i++){
sum=sum+a[i];
}
printf("%d\n",sum);
}
for(i=p;i<n;i++){
v=v+a[i];
}
printf("%d",v);
printf("mutliplication of two array");
printf("%d\n",sum*v);
}*/
//#########################################----- DAY 4 -------######################################
// Q.1
/*#include<stdio.h>
int palindrome(int x);
int main(){
    int a,g;
    printf("enter the number");
    scanf("%d",&a);
    g=palindrome(a);
    printf("%d\n",g);
    if(a==g)
    printf("   number is palindrome\n");
    else
    printf("   number is not palindrome");
}
int palindrome(int x)
{
    int rem,rev=0;
    while(x!=0){
      rem=x%10;
      rev=rev*10+rem;
      x/=10;
    }
    return rev;
}
*/
//Q.3
/*int f1(int n)
{

    int s;
    if(n==1||n==0)
        return 1;
    s=n*f1(n-1);
    return(s);
}
int main(){
    int k,p;
    printf("enter the value");
    scanf("%d",&p);
    k=f1(p);
    printf("%d",k);
}
//Q.6
/*#include<stdio.h>
int armstrong(int x);
int main()
{
int n,a,p;
printf("enter the number=");
scanf("%d",&n);
p=armstrong(n);
printf("%d\n",p);
if(n==p)
printf("armstrong  number");
else
printf("not armstrong number");
}
int armstrong(int x){
int t,r,sum;
t=x;
while(x>0)
{
r=x%10;
sum=sum+(r*r*r);
x=x/10;
}
return sum;
}
*/
//Q.5
/*
#include<stdio.h>
int main(){
int n,i,j;
printf("enter the value");
scanf("%d",&n);
for(i=1;i<n;i++)
{
for(j=2;j<i;j++){
if(i%j==0)
 break;
}
if(i==j)
 printf("%d\t",i);
}
}*/
/* leetcode
#include<stdio.h>
int main(){
int n,i,j,sum=0;
printf("enter the value");
scanf("%d",&n);
for(j=2;j<n;j++){
if(n%j==0){
printf("%d\t",j);
}
}
sum=sum+j;
printf("%d\n",sum);
}*/
//Q.8// gcd with recursion
/*#include<stdio.h>
int gcd(int a,int b){
if(a==b)
    return a;
if(a%b==0)
    return b;
if(b%a==0)
    return a;
if(a>b)
return (gcd(a%b,b));
else
return (gcd(a,b%a));
}
int main (){
    int c,n;
scanf("%d%d",&c,&n);
printf("%d",gcd(c,n));
}*/

//Q.11
/*int fib(int p){
if(p==0)
    return 0;
else if(p==1)
    return 1;
    else
    return fib(p-1)+fib (p-2);
}
int main(){
int n=5,k,i;
k=fib(5);
for(i=0;i<n;i++){
printf("%d",fib(i));
}
}*/


//######################################################## -----DAY->3--#####################################################################

/*#include<stdio.h>
int main()
{

  float f=1.0;
   int s1,f1,i,n;
   float s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*(1.0/i);
        s=s+f;

    }
      printf("%f",s);

}*/
//Q.1
/*
#include<stdio.h>
int main()
{

  int f=1;
   int s1,f1,i,n;
  int s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*(i);
        s=s+f;

    }
      printf("%d",s);

}*/
//Q.2 day 3

/*#include<stdio.h>
int main()
{

    int f=1,s1,f1,i,n;
int  s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;

        s=s+(f/i);

    }
      printf("%d",s);


    }
*/
/*#include<stdio.h>
#include<math.h>
int main(){
int x,n,g,i;
float f=1.0,s=0.0;
printf("enter the n");
scanf("%d",&n);
printf("enter the x");
scanf("%d",&x);
for(i=1;i<=n;i++){
   g=pow(x,i);
    f=(f*g)/i;
    s=s+f;
}
printf("%f\n",s);
}*/

    /*int f=1,x,i,n;
    int s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;

        s=s+(f/i);

    }
      printf("%d",s);


*/
/*#include<stdio.h>
int main(){
  int i,j,k;
  for(i=1;i<=6;i++){
        k=1;
    for(j=1;j<=11;j++){
        if(j<=7-i||j>=5+i){


        printf("%d",k);
        j<6?k++:k--;
}        else
            printf(" ");
            if(j==6)
                k--;

    }
    printf("\n");

    }
  }
  /*
#include<stdio.h>
int main(){
int i,j,k,l;
for(i=1;i<=6;i++)//raws
{
for(j=1;j<=7-i;j++)//coloumn
{
printf ("%d",j);
}
printf("\n");
}
for(i=1;i<=6;i++)
{
for(j=1;j<=1+i;j++)
{
    printf(" ");
}
for(j=7-i;j>=1;j--)//coloumn
{
  printf ("%d",j);
}
printf("\n");

}
*/
// ##############################################################----DAY 8-----#################################################################
//Q.1
/*#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficient of x^2: ");
    scanf("%f", &a);

    printf("Enter coefficient of x: ");
    scanf("%f", &b);

    printf("Enter constant term: ");
    scanf("%f", &c);

    discriminant = sqrt( b*b - 4*a*c );

    if(discriminant >= 0)
    {
        root1 = ( -b + discriminant ) / (2.0*a);
        root2 = ( -b - discriminant ) / (2.0*a);
        printf("\nFirst root: %.2f\n", root1);
        printf("Second root: %.2f\n", root2);
    }

    else
    {
        printf("\nRoots are imaginary");
    }

    return 0;
}*/
//Q.2
/*#include<stdio.h>
int main(){
int n,sum=0,p;
printf("enter the value");
scanf("%d",&n);
printf("%d",n);
while(n>9){
sum=0;
while(n>0){
p=n%10;
n=n/10;
sum=sum+p;
}
n=sum;
  }
printf(" sum is  %d",sum);
}
*/
