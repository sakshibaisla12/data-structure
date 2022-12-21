#include<stdio.h>
int main(){
int tea,coffee;
printf("enter your order for tea,coffee");
scanf("%d",&tea);
if((tea<=56)||(coffee>=34)){
printf("you can take tea or coffee");}
else{
printf("you can't take  tea or coffee");
}
return 0;
}
