#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE],top=-1;

void push();
void pop();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("---MENU---\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter Your Choice:\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
            default:
            printf("Please!! Enter a Valid Choice..\n");
        }
    }
}

void push()
{
    int data;
    if(top==SIZE-1)
    {
        printf("STACK OVERFLOW!!\n");
    }
    else{
        printf("Enter the value to be inserted:\n");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("Element inserted successfully!!\n");
    }
}

void pop()
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW!!\n");
    }
    else{
        printf("Element:%d POPPED\n",stack[top]);
        top--;
    }
}
void display()
{
    for(int i=top;i>=0;i--)    
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}




