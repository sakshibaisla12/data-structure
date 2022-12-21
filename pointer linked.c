#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *link;
};
int main(){
    struct node s,*p,**q;
    int value;
    s.data=10;
    s.link=NULL;
    p=&s;
    q=&p;
    printf("address of struct node s=%u (&s)\n",&s);
    printf("address of struct node pointer *p=%u (&p)\n",&p);
    printf("address of struct node pointer **q=%u (&q)\n",&q);
    printf("\n");
    printf("address of struct node s=%u (&s)\n",&s);
    printf("address of struct node pointer *p=%u (p)\n",p);
    printf("\n");
    printf("address of struct node pointer *p=%u (&p)\n",&p);
    printf("address of struct node pointer **q=%u (q)\n",q);
    printf("\n");
    printf("address of struct node s=%u (&s)\n",&s);
    printf("address of struct node (via pointer *p)=%u (p)\n",p);
    printf("address of struct node (via pointer **q)=%u (*q)\n",*q);
    printf("\n");
    printf("address of struct node *p(via pointer *p)=%u (p)\n",&p);
    printf("address of struct node *p(via pointer **q)=%u (*q)\n",q);
    printf("\n");
    printf("value stores in  struct node s=%d (s.data)\n",s.data);
    printf("value stores in  struct node s(via pointer *p)=%d (p->data)\n",p->data);
    printf("value stores in struct node s(via pointer **q)=%d (q->data)\n",(*q)->data);
    printf("\n");
    return 0;
}
