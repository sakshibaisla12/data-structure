#include<stdio.h>
struct node{
 int data;
 struct node *link;
};
int main(){
    struct node *start ,*temp,*r,*prev,*next;
    start=NULL;
    int x=1,value;
    while(x==1){
       printf("enter the value of data to be inserted\n") ;
       scanf("%d",&value);
       if(start==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->link=NULL;
        start=temp;
       }
       else
       {
        temp=start;
        while(temp->link!=NULL) {
         temp=temp->link;
        }
       r=(struct node*)malloc(sizeof(struct node));
       r->data=value;
       temp->link=r;
       r->link=NULL;
       }
       printf("want more to insert press 1");
       scanf("%d",&x);
    }
      printf("\n");

    temp=start;
    prev=NULL;
    while(temp!=NULL){
       next=temp->link;
       temp->link=prev;
       prev=temp;
       temp=next;
    }
    start=prev;

      temp=start;
      int count=0;
      while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->link;
        count++;
    }
      printf("%d nodes are in ",count);
      return 0;
}


