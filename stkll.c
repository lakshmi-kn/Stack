#include<stdio.h>
#include<stdlib.h>
int top=-1;

int isfull(int s)
{
	if(top==s-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL, *pos=NULL, *tail=NULL,*temp;
	
	int ch,entry,count,n,flag=0,s;
	printf("Enter stack size:");
	scanf("%d",&s);
	
	while (1)
	{
		printf("\nSTACK OPERATIONS\n");
		printf("\n1.Is the stack empty\n2.Is the stack full\n3.Push\n4.Pop\n5.Display\n6.Find top of stack\n7.Exit\n");
		printf("\nEnter choice:\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				if(isempty())
				{
					printf("Stack is empty\n");
				}
				else
				{
					printf("Stack is not empty\n");			
				}
				break;
			}	
			
			
			case 2:
			{
				if(isfull(s))
				{
					printf("Stack is full\n");
				}
				else
				{
					printf("Stack is not full\n");			
				}
				break;			
			}
								
				
			case 3:
			{
				printf("\nEnter data:\t");
				scanf("%d",&entry);
				
				if(isfull(s))
				{
					printf("\nOverflow\n");
				}
				else if(isempty())
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->data=entry;
					tail=head;
					printf("\n%d pushed",head->data);
					top++;
				}
				else
				{	
					temp=(struct node*)malloc(sizeof(struct node));
					temp->data=entry;
					temp->next=head;
					head=temp;
					printf("\n%d pushed",head->data);
					top++;
				}
				break;
			}
			
			case 4:
			{
				if(isempty())
				{
					printf("Underflow");
				}
				else
				{
					temp=head;
					head=head->next;
					temp->next=NULL;
					
					printf("\nData to be deleted is %d",temp->data);
					free(temp);
					printf("\n");
					top--;
				}
				break;
			}
			
			
			case 5:
			{
				if(isempty())
				{
					printf("Empty Stack");
				}
				
				pos=head;
				printf("\nElements are:\n");
				while (pos!=NULL)
				{
					printf("%d",pos->data);
					printf("\t\n");
					pos=pos->next;
				}
				break;
			}
			
			case 6:
			{
				printf("\nTop Position %d",top);
				printf("\nTop value %d\n", head->data);
				break;
			}	
			
			
			case 7:
			{
				printf("\nGoodbye");
				exit(0);
			}
			
			default:
			{
				printf("Invalid choice");
				break;
			}
		}
	}
}



