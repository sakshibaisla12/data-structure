# include<stdio.h>
int main(){
int bs,da,Hra,net_salary;

 printf("enter salary of employee");
 scanf("%d",&bs);
 da=bs*(25/100);
 Hra=bs*(15/100);
 net_salary =bs-(10*(da+Hra+bs)/100);
 printf("the net salary is %d",net_salary);
 return 0;
}
