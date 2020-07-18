//find the sum of elements using linked list
#include<stdio.h>
#include<stdlib.h>//DMA==>Dynamic memory allocation
//defining structure of a node
typedef struct node
{
	int data;
	struct node *next;
}node;

int find_length(node *start)
{
	int count = 0;
	node *p;
	p = start;//make p pointers points on the head node
	while(p!=NULL)
	{
		count++;         //cnt calculates the length
		p = p->next;
	}

return count;
}

int sum( node *start)
{
int s=0;
while(start!=NULL)
{
s=s+start->data;
start=start->next;
}
return s;
}

int Rsum( node *start)
{
if(start==NULL)// if there is no element in list
return 0;//base condition
else
return Rsum(start->next)+start->data;
}
int main()
{	//I want to insert elements inside the node 

	int a , i , n , l ,s1;
	node *p,*q,*start;
	
	
	printf("Enter the number of nodes");
	scanf("%d",&n);//5
	
	printf("Enter all the nodes separated by space \n");
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	//created space or node using  DMA
	
	//insert the data into head node
	p->data = a;
	p->next = NULL;
	start = p; 
	
	//1 st node to the node till i get null 
		
	for(i=1;i<n;i++)
	 	{
		 	q = (node*)malloc(sizeof(node)); 
			scanf("%d",&a); //node for remaing
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
	 	
		}

l = find_length(start);
s1=Rsum(start);
printf("The length is %d",l);
printf("The Sum of node is %d",s1);


}

