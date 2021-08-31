#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int insert_node();
int display();
struct node
{
	int data;
	struct node *link;
}*root;
int main()
{
	printf("Enter data in node:\n");
	insert_node();
	display();
}
int insert_node()
{
	int i;
	struct node *fnode,*tmp;
	root=(struct node*)malloc(sizeof(struct node));
	if(root==NULL)
	{
		printf("Memory not allocate\n");
	}
	else
	{
			printf("Enter a data:");
			scanf("%d",&root->data);
			root->link=NULL;
			tmp=root;
			for(i=2;i<=5;i++)
			{
				fnode=(struct node*)malloc(sizeof(struct node));
					if(fnode==NULL)
						{
							printf("Memory not allocate\n");
						}
					else
						{
							printf("Enter a data:");
							scanf("%d",&fnode->data);
							fnode->link=tmp;
							tmp=fnode;
							root=fnode;
						}
			}
	}
}
int display()
{
	struct node *tmp=root;
	while(tmp!=NULL)
	{
		printf("Data is: %d\n",tmp->data);
		tmp=tmp->link;
	}
}
