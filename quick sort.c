#include<stdio.h>
int Partition(int [],int,int);
void QS(int [],int,int);
int a[]={75,55,29,87,64,32,12,17};
void swap(int *,int *);
int main()
{

 int p=0,q=7;
 int i;
 printf("array before sorting\n");
 for(i=0;i<8;i++)
    printf("%d\t",a[i]);
 QS(a,0,7);
 printf("array after sorting\n");
 for(i=0;i<8;i++)
    printf("%d\t",a[i]);
 return 0;
}

void QS(int a[],int p,int q)
{
  int m;
   if(p<q){
    m = Partition(a,p,q);
      QS(a,p,m-1);
      QS(a,m+1,q);
  }
}

int Partition(int a[],int p,int q)
{
  int x,i,j,temp;
  i=p;
  x = a[p];
  for(j=i+1;j<=q;j++)
  {
    if(x>a[j])
    {
      i = i+1;
      swap(&a[i],&a[j]);
    }
  }
      swap(&a[i],&a[p]);
   return i;
}
void swap(int *p,int *q)
{
  int temp = *p;
  *p = *q;
   *q = temp;

}
