#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void create_node(int);
void revers(int);
int len;
struct node
{
	int data;
	struct node *link;
}*root;

int main()
{
	int num_node;
	printf("How many node you want to create for 1st linked list:");
	scanf("%d",&num_node);
	create_node(num_node);
	printf("Node data are:\n");
	display();
	printf("After revers:\n");
	revers(len);
	display();
}

void create_node(int num_node)
{
	int i;
	struct node *fnode,*tmp;
	root=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&root->data);
	root->link=NULL;
	tmp=root;
	for(i=2;i<=num_node;i++)
	{
		fnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&fnode->data);
		fnode->link=NULL;
		tmp->link=fnode;
		tmp=tmp->link;
	}
}
void display()
{
	struct node *tmp;
	tmp=root;
	len=0;
	while(tmp!=NULL)
	{
		len++;
		printf("Data is:%d\n",tmp->data);
		tmp=tmp->link;
	}
}
void revers(int len)
{
	struct node *p,*q;
	int i,j,k,temp;
	i=0;
	j=len-1;
	p=q=root;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
}
