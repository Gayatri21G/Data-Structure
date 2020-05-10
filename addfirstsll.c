#include<stdio.h>
#include<stdlib.h>
#define nodealloc (struct node *)malloc(sizeof(struct node))
typedef struct node
{
	int data;
	struct node *next;
}nodeptr;
nodeptr *create(nodeptr *head,int num)
{
	nodeptr *current,*p;
	p=nodealloc;
	p->next=NULL;
	p->data=num;
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
void addfirst(nodeptr *head)
{
	int num;
	nodeptr *p,*current;
	p=nodealloc;
	p->data=num;
	printf("\n Enter element:");
	scanf("%d",&p->data);
	p->next=head;
	head=p;
	display(head);
}

void main()
{
	nodeptr *head=NULL;
	head=create(head,10);
	head=create(head,20);
	head=create(head,30);
	display(head);
	addfirst(head);
}
