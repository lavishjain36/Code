//TO find Maximum element from Linked List
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
typedef struct node
{
	int data;
	struct node *next;
}node;


int Max( node *head)
{
int max=INT32_MIN;
while(head)
{
if(head->data>max)
max=head->data;
head=head->next;
}
return max;
}
int main()
{	
	int a , i , n , l ;
	node *p,*q,*head;
	
	printf("Enter the number of nodes");
	scanf("%d",&n);//5
	
	printf("Enter all the nodes separated by space \n");
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;//assign the item a to node data part
	p->next = NULL;
	head = p; 
		
	for(i=1;i<n;i++)
	 	{
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
	 	
		}

l=Max(head);
printf("The Maximum element in list  is %d",l);



}
