#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int create_node(int);
int display();
struct node
{
	int data;
	struct node *link;
}*linked;
int main()
{
	int n;
	printf("How many node you want to create:");
	scanf("%d",&n);
	create_node(n);
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
	fnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for the beginning node:");
	scanf("%d",&fnode->data);
	fnode->link=linked;
	linked=fnode;
}
int display()
{
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
			printf("Data:%d\n",tmp->data);
			tmp=tmp->link;
		}
	}
}
