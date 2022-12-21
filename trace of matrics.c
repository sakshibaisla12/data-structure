# include<stdio.h>
int main (){
int a[3][3],i,j=0,trace;
printf("enter the number");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("traverse is\n");
for(i=0;i<3;i++){
for(j=2;j>=0;j--){
printf("%d \t",a[j][i]);
}
printf("\n");
}

trace =a[0][0]+a[1][1]+a[2][2];
printf("trace of a matrix is %d",trace);
}
