#include<stdio.h>
struct node{
 int data;
 struct node *link;
};
void insert(struct node**,int);
int main(){
    struct node *start ,*temp,*r;
    start=NULL;
    int x=1,value;
    printf("insertion at the last in  using recursion \n");
    while(x==1)
{
    printf("enter the value to be inserted\n");
    scanf("%d",&value);
    insert(&start,value);
    printf("want  the value to be inserted? press 1\n");
    scanf("%d",&x);
}
display(start);
int count_ll =count(start);
return 0;
}
void insert(struct node **q,int data){
if((*q)==NULL)
    {
       struct node *r;
       r=(struct node*)malloc(sizeof(struct node));
       r->data=data;
       (*q)=r;
       (*q)->link=NULL;
    }
    else{
        insert(&((*q)->link),data);
  }
   }

  int count(struct node *q){
  if(q==NULL){
    return 0;
  }

  else{
    return 1+count(q->link);
  }
  }
   void display (struct node *q)
   {
  if(q==NULL){
    printf("no data");
  }
  else{
    printf("%d->",q->data);
    display(q->link);
  }
}
