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
nodeptr *addpos(nodeptr *head)
{
	nodeptr *p=head;
	nodeptr *current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=p;
	head=head->next;
	p->next=NULL;
	return head;
}
void main()
{
	nodeptr *head=NULL;
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	display(head);
	printf("\n LInked list is:");
	head=addpos(head);
	display(head);
}
