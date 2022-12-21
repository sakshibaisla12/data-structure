#include<stdio.h>
struct node{
 struct node *prev;
 int data;
 struct node *next;
};
int main(){
    struct node *start ,*temp,*r,*prev;
    int x=1,value,y;
    start=NULL;

    printf("inserting nodes in dll\n");

    while(x==1){
            printf("for inserting at beginning ,press 2\n");
            scanf("%d",&y);
    while(y==2){
            printf("enter the value to be inserted 3\n");
            scanf("%d",&value);
     if(start==NULL){

       r=(struct node*)malloc(sizeof(struct node));
       r->data=value;
       r->prev=NULL;
       r->next=NULL;
       start=r;
       }
       else
    {
       temp=start;
       while(temp->next!=NULL){
            temp=temp->next;
       }
       r=(struct node*)malloc(sizeof(struct node));
        temp->next=r;
        r->prev=temp;
        temp=r;
       }
       printf("want more nodes to be ins, at begin press 2\n");
            scanf("%d",&y);
      }
      printf("want more nodes to be inserted?,press 1\n");
            scanf("%d",&x);
    }
     printf("\n");
     temp=start;
     int count=0;
     while(temp!=NULL){
        printf("%d <-->",temp->data);
        temp=temp->next;
        count++;
    }
      printf("\n");
      printf("%d\n number nodes are in ",count);

      return 0;
}
