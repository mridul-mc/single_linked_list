#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;	
};
int main()
{
	struct node *root;
	root=(struct node*)malloc(sizeof(struct node));
	printf("Enter a data:");
	scanf("%d",&root->data);
	root->link=NULL;
	printf("\n%d",root->data);
}
