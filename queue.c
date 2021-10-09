#include <stdio.h>
#include <stdlib.h>

#define size 5
int front=0,rear=0;
void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("---MENU---\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Please! Enter a Valid Choice:\n");
        }
    }
}

void enqueue()
{
    int queue[size];
    if(rear==size)
    {
        printf("Queue is FULL !!\n");
    }
    else
    {
        printf("Enter the value to inserted:\n");
        scanf("%d",&queue[rear++]);
    }

}

void dequeue()
{
    int x=size;
    int queue[size];
    if(front==rear)
    {
        printf("Queue is EMPTY !\n");
    }
    else{
        printf("Element: %d DELETED !\n",queue[front++]);
        x++;
    }
}

void display()
{
    int queue[size];
    if(front==rear)
    {
        printf("Queue is EMPTY\n");
    }
    else
    {
        for(int i=front;i<rear;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}