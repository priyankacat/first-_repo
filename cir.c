#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *last;
int data;
}*start=NUll,*last=NULL;
typedef struct node node;
void insert()
{
int num;
node *p;
p=(node*)malloc(sizeof(node));
printf("enter the data");
scanf("%d",&num);
if(start==NULL)
{
start=p;
p->data=num;
p->last=start;
q=start;
}
else
{
q->last=p;
p->data=num;
p->last=start;
q=p;
}
void main()
{
insert();
insert();
}


