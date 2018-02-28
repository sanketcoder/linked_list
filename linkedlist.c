#include<stdio.h>
#include<stdlib.h>
struct node {
	int value;
	struct node *next;
};
typedef struct node data_node;
data_node *head=NULL,*temp=0,*p=0;
void insert_last()
{
	int data;	
	printf("Enter value to insert:");
	scanf("%d",&data);
	temp=(data_node *)malloc(sizeof(data_node));
	temp->value=data;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{    p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
	}
}
void insert_begining()
{
	int data;
	printf("Enter value to insert:");
	scanf("%d",&data);
	temp=(data_node *)malloc(sizeof(data_node));
	temp->value=data;
	temp->next=head;
	head=temp;

}
void insert_middle()
{
	int data,n;
	printf("\nAfter which number you want to insert the value?\n");
	scanf("%d",&n);
	printf("Enter value to insert:");
	scanf("%d",&data);
	temp=(data_node *)malloc(sizeof(data_node));
	temp->value=data;
	p=head;
	while(p->value!=n)
		p=p->next;
	temp->next=p->next;
	p->next=temp;

}
void display()
{
	p=head;
	//printf("\n");
	while(p!=NULL)
	{
		printf("%d\t",p->value);
		p=p->next;
	}
	printf("\n");

}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter your choice:\n1.Insert\n2.Display\n3.Exit\n4.Insert at begining\n5.Insert After a element\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insert_last();
					break;
			case 2: display();
					break;
			case 3: exit(0);
					break;
			case 4: insert_begining();
					break;	
			case 5: insert_middle();
					break;					
		}
	}
return 0;	
}