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
void evennode(nodeptr *head)
{
	nodeptr *p,*current=head;
        while(current && current->next)
	{
		current=current->next->next;
	}
	if(current==NULL)
	{
		printf("\n Linked list is EVEN");
	}
	else
	{
		printf("\n Linked list is ODD");
	}
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
void main()
{
	nodeptr *head=NULL;
//	head=create(head,11);
	head=create(head,22);
	head=create(head,40);
	head=create(head,83);
	head=create(head,50);
	display(head);
	printf("\n The even nodes of the linked list are:");
	evennode(head);
}	
