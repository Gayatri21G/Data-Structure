#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define nodealloc (struct node *)malloc(sizeof(struct node))
typedef struct node
{
	int data;
	struct node *next;
}nodeptr;
nodeptr *create(nodeptr *head)
{
	nodeptr *p,*current;
	p=nodealloc;
	p->next=NULL;
	printf("\n Enter data:");
	scanf("%d",&p->data);
	if(head==NULL)
	{
		head=current=p;
	}
	else
	{
		current->next=p;
		current=p;
	}
	return head;
}
void display(nodeptr *head)
{
	nodeptr *current=head;
	while(current!=NULL)
	{
		printf("%d->",current->data);
		current=current->next;
	}
}
nodeptr *addpos(nodeptr *head,int pos,int num)
{
	int i;
	nodeptr *p=NULL;
	nodeptr *current=head;
	nodeptr *nnode=NULL;
	p=nodealloc;
	printf("\n Enter position:");
	scanf("%d",&pos);
	printf("\n Enter data:");
	scanf("%d",&num);
	p->data=num;
	for(i=1;i<pos-1;i++)
	{
		current=current->next;
	}
	nnode=current->next;
	current->next=p;
	p->next=nnode;
	return head;
}
void main()
{
	int pos,num;
	nodeptr *head=NULL;
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	display(head);
	head=addpos(head,pos,num);
	display(head);
}
