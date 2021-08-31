#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int create_node(int);
int create_node2(int);
void con();
int display();
struct node
{
	int data;
	struct node *link;
}*linked,*linked2;
int main()
{
	int n;
	printf("How many node you want to create:");
	scanf("%d",&n);
	printf("Enter data for First linked list:\n");
	create_node(n);
	printf("Enter data for second linked list:\n");
	create_node2(n);
	con();
	printf("\nNode data are:\n");
	display();
}
int create_node(int n)
{
	struct node *tmp,*fnode;
	int num,i;
	linked=(struct node*)malloc(sizeof(struct node));
	if(linked==NULL)
	{
		printf("Memory can't allocated");
	}
	else
	{
		printf("Enter data for 1 node:");
		scanf("%d",&num);
		linked->data=num;
		linked->link=NULL;
		tmp=linked;
	}
	for(i=2;i<=n;i++)
	{
		fnode=(struct node*)malloc(sizeof(struct node));
		if(fnode==NULL)
		{
			printf("Memory can't allocated");
		}
		else
		{
			printf("Enter data for %d node:",i);
			scanf("%d",&num);
			fnode->data=num;
			fnode->link=NULL;
			
			tmp->link=fnode;
			tmp=tmp->link;
		}
	}
}
/******************************************/
int create_node2(int n)
{
	struct node *tmp,*fnode;
	int num,i;
	linked2=(struct node*)malloc(sizeof(struct node));
	if(linked2==NULL)
	{
		printf("Memory can't allocated");
	}
	else
	{
		printf("Enter data for 1 node:");
		scanf("%d",&num);
		linked2->data=num;
		linked2->link=NULL;
		tmp=linked2;
	}
	for(i=2;i<=n;i++)
	{
		fnode=(struct node*)malloc(sizeof(struct node));
		if(fnode==NULL)
		{
			printf("Memory can't allocated");
		}
		else
		{
			printf("Enter data for %d node:",i);
			scanf("%d",&num);
			fnode->data=num;
			fnode->link=NULL;
			
			tmp->link=fnode;
			tmp=tmp->link;
		}
	}
}
/*********************************************/
void con()
{
	struct node *tmp;
	tmp=linked;
	while(tmp->link!=NULL)
	{
		tmp=tmp->link;
	}
	tmp->link=linked2;
}
int display()
{
	int cou=0;
	struct node *tmp;
	if(linked==NULL)
	{
		printf("Memory cannot allocated");
	}
	else
	{
		tmp=linked;
		while(tmp!=NULL)
		{
			cou++;
			printf("Data:%d\n",tmp->data);
			tmp=tmp->link;
		}
	}
	printf("Total node:%d",cou);
}
