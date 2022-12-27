#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int main (){
struct node *top,*start,*r,*temp;
top=NULL;
int x=1,value;
    while(x==1){
       printf("enter the value of data to be inserted\n");
       scanf("%d",&value);
 if(top==NULL){
    r=(struct node*)malloc(sizeof(struct node));
    r->data=value;
    r->link=NULL;
    top=r;
    }
    else{
       r=(struct node*)malloc(sizeof(struct node));
        r->data=value;
        r->link=top;
        top=r;
    }
    printf("want to enter press 1\n");
    scanf("%d",&x);
    }
    r=top;
    int count;
    while(r!=NULL){
        printf("%d->",r->data);
        r=r->link;
        count++;
    }
}
    /*
      printf("\n %d nodes in ll\n",count);
      printf("\n delete at beg opn in ll\n");
      x=1;
      while(x==1)
      {

        if(top==NULL)
        {
        printf("stack is underflow!");
        break;
        }
        else
        {
        temp=top;
        top=top->link;
       // printf("Deleted element is %d",temp->data);
        free(temp);
        }
        printf("want more nodes to delete? press 1\n");
        scanf("%d",&x);
      }
      r= top;
      count=0;
      while(r!=NULL)
    {
        printf("%d ->",r->data);
        r=r->link;
        count++;
    }
     printf("\n %d nodes in ll\n",count);
     return 0;
     }*/
