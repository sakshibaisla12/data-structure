/*int f1(int n)
{-

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
*/
#include<stdio.h>
void display(int a){
if(a<1){
    return ;
}
else{
    printf("%d",a);
    display(a-1);
    printf("%d",a);
}
}
int main()
{
    int n=3;
    display(n);
}
