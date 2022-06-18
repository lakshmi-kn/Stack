#include<stdio.h>
#include<stdlib.h>
#define size 100

int top=-1,n;
int stack[size];


int isfull()
{
	if(top==n-1)
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


void push(int val)
{
	if(isfull())
	{ 	printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d Pushed",stack[top]);
	}
}


void pop()
{
	if(isempty())
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\n%d Popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}


void findtop()
{
	printf("\nTop Position %d",top);
	printf("\nTop value %d\n", stack[top]);
}


void display()
{
	if(isempty())
	{
		printf("\nStack Empty");
	}
	int i,x;
	x=top;
	for (i=x;i>=0;i--)
	{
		printf("\n%d",stack[i]);
	}
}


void main()
{
	int ch,val,top,data;
	
	printf("Enter stack size:");
	scanf("%d",&n);
	
	while(1)
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
				if(isfull())
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
				printf("Enter value to be added to stack:");
				scanf("%d",&data);
				push(data);
				break;
			}
			
			case 4:
			{
				pop();
				break;
			}
			
			case 5:
			{
				display();
				break;
			}
			
			case 6:
			{
				findtop();
				break;
			}
			
			case 7:
			{
				printf("Goodbye!");
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


				
			
				
		
		
		
		
