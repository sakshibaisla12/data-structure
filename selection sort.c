/////////////////////////////////////--------------------sorting----------------------------//////////////////////////////////////////

///////////////////////////////////---------------------selection sort-----------------------//////////////////////////////////////////
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selectionsort(int a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        int minindex=i;
        for(j=i+1; j<n; j++)
        {
            if(a[minindex]>a[j])
                minindex=j;
        }
        swap(&a[minindex],&a[i]);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}
    int main()
    {
        int n,i,a[10];
        printf("enter the no");
        scanf("%d",&n);
        printf("enter the element of array");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        selectionsort(a,n);
        printarray(a,n);

    }

///////////////////////////---------------------------bubble sort----------------------------------------------////////////////////////////
#include<stdio.h>
void bubblesort(int a[],int n)
    {
        int i,j;
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(&a[j],&a[j+1]);
                }
            }
        }
    }
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
     void printarray(int arr[],int n)
        {
            int i;
            for(int i=0; i<n; i++)
            {
                printf("%d",arr[i]);
            }
        }
 int main()
    {
        int n,i,a[10];
        printf("enter the no");
        scanf("%d",&n);
        printf("enter the element of array");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        bubblesort(a,n);
        printarray(a,n);

    }

/////////////////////////////------------------------insertion sort--------////////////////////////////////////////////////////////////
#include<stdio.h>
void insertionsort(int arr[],int n){
int i,j,key;
for(i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
}
}
void printarray(int arr[],int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){

        int n,i,a[10];
        printf("enter the no");
        scanf("%d",&n);
        printf("enter the element of array");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        insertionsort(a,n);
        printarray(a,n);
        }
//////////////////////////--------------------------merge sort-------------------------//////////////////////////////////
#include<stdio.h>
void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
    mid=(i+j)/2;
    mergesort(a,i,mid);
    mergesort(a,mid+1,j);
    merge(a,i,mid,mid+1,j);
}
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i=i1;
    int j=i2;
    int k=0;
    while(i<=j1&&j<=j2)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
            temp[k++]=a[j++];
    }
        while(i<=j1)
        {
            temp[k++]=a[i++];
        }
        while(j<=j2)
        {
            temp[k++]=a[j++];
        }
       for(i=i1,j=0;i<=j2;i++,j++)
a[i]=temp[j];
}
void printarray(int arr[],int n){
    int i;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main()
{
int a[30],n,i;
printf("Enter no of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
mergesort(a,0,n-1);
printf("\nSorted array is :");
printarray(a,n);
}



