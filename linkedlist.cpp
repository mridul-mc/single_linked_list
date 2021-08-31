#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void link1();
void link2();
void link3();
void display();
struct node
{
	int data;
	struct node *link;	
};
struct node *node1,*node2,*node3;
int main()
{
	link1();
	link2();
	link3();
	display();
}
void link1()
{
	node1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for 1st node:");
	scanf("%d",&node1->data);
	node1->link=NULL;
}
void link2()
{
	node2=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for 2nd node:");
	scanf("%d",&node2->data);
	node2->link=NULL;
	node1->link=node2;
}
void link3()
{
	node3=(struct node*)malloc(sizeof(struct node));
	printf("Enter data for 3rd node:");
	scanf("%d",&node3->data);
	node3->link=NULL;
	node2->link=node3;
 } 
 void display()
 {
 	int count_node=0;
 	struct node *tmp;
 	tmp=node1;
 	while(tmp!=NULL)
 	{
 		count_node++;
 		tmp=tmp->link;
	}
	printf("%d",count_node);
 }
