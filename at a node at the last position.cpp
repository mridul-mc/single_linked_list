#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int creat_node(int);
int display();
struct node
{
	int data;
	struct node *link;
}*root;
int main()
{
	int n;
	printf("Enter the no of node:");
	scanf("%d",&n);
	creat_node(n);
	printf("Your entire data is:\n");
	display();
}
int creat_node(int n)
{
	root=(struct node*)malloc(sizeof(struct node));
	struct node *tmp,*fnode;
	if(root==NULL)
	{
		printf("Memory cannot allocate");
	}
	else
	{
		printf("Enter data for 1 node:");
		scanf("%d",&root->data);
		root->link=NULL;
		tmp=root;
		for(int i=2;i<=n;i++)
		{
			fnode=(struct node*)malloc(sizeof(struct node));
			if(fnode==NULL)
			{
				printf("Memory cannot allocate");
			}
			else
			{
				printf("Enter data for %d node:",i);
				scanf("%d",&fnode->data);
				fnode->link=NULL;
				tmp->link=fnode;
				tmp=tmp->link;
			}
		}
	}
	//start
	fnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter a node at last position:");
	scanf("%d",&fnode->data);
	fnode->link=NULL;
	tmp->link=fnode;
}
int display()
{
	struct node *tmp;
	if(root==NULL)
	{
		printf("List is empty");
	}
	else
	{
		tmp=root;
		while(tmp!=NULL)
		{
			printf("Data is:%d\n",tmp->data);
			tmp=tmp->link;
		}
	}
}
