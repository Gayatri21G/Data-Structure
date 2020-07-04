#include<stdio.h>
#include<stdlib.h>
#define nodealloc (struct node *)malloc(sizeof(struct node))
typedef struct node
{
	int data;
	struct node *next;
}nodeptr;
nodeptr *create(nodeptr *head)
{
	int num;
	nodeptr *current,*p;
	p=nodealloc;
	p->data=num;
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
void searchcount(nodeptr *head)
{
	int key,count=0;
	nodeptr *current=head;
	printf("\n Enter key:");
	scanf("%d",&key);
	while(current!=NULL)
	{
		if(current->data==key)
		{
			count++;
		}
		current=current->next;
	}
	printf("\n Count is %d",count);
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
int main()
{
	nodeptr *head=NULL;
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	head=create(head);
	display(head);
	searchcount(head);
	return 0;
}
