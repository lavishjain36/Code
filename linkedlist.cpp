#include<stdio.h>
#include<stdlib.h>
//define the structure of the node
struct node{
	int data;
	struct node *next;
};

int main()
{
	int i, n,item;
	//2 pointers that will point to node.
	//we crate head node separately--0th node
	struct node *p, *q, *head;
	
	printf("Enter the number of nodes");
	scanf("%d",&n);
	//Ask user to enter the value of the head node
	printf("Enter the value of the head node");
	scanf("%d",&item);
	
	//create a node or allocate a memory 
	//location to the node
	
	q=(struct node *)malloc(sizeof(struct node));
	
	//assign item to the data part
	q->data=item;
	//As there is only one node that is head node .
	q->next=NULL;
	
	//Make actual head points to that node.
	//That node is pointed by q
	
	head=q;
	
	 //to tracing the whole ll. 
	 //make the ll.
	 //p points to head node right now
	p=head;//p points to head node
	p=head;
	//i should start from 1 cuz 0 is for head node
	for(i=1; i<n ;i++)
	{
		printf("Enter the value of next node");
	scanf("%d",&item);
	
	//create a node or allocate a memory 
	//location to the node
	
	q=(struct node *)malloc(sizeof(struct node));
	
	//assign item to the data part
	q->data=item;
	//As there is only one node that is head node .
	q->next=NULL;
	
	//pointer p point to next node
  //pointer p will jump to next node 
	//for getting ready for the next node
	
	p->next=q;//link the nodes
	p=p->next;//jump to the current node 
	
		
	}
	
	printf("\n");//give some next line before printing output
	//print the linked list
	//will make pointer p points to the head node
	
	p=head;
	while(p!=NULL)
	{
		printf("\t %d",p->data);
		//go to next node
		p=p->next;
	}
	
	//when p equals or reaches to end ,we come out
	return 0;
}

