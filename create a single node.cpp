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
	struct node *root=NULL;
	root=(struct node*)malloc(sizeof(struct node));
	printf("Enter a number:");
	scanf("%d",&root->data);
	root->link=NULL;
	printf("%d",root->data);
}

