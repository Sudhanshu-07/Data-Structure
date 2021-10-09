#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

struct node * head;
void insertion_first()
{
    int data;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted:\n");
    scanf("%d",&data);
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}

void insertion_end()
{
    int data;
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    printf("Enter the value:\n");
    scanf("%d",&data);
    temp->data=data;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=NULL;
}

void insertion_position()
{
    int data,index;
    struct node * ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    struct node * new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the index:\n");
    scanf("%d",&index);
    printf("Enter the value:\n");
    scanf("%d",&data);
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        new_node=new_node->next;
    }
    new_node->data=data;
    new_node->next=ptr->next;
    ptr->next=new_node;


}

void deletion_first()
{
    struct node* ptr=(struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        printf("\nThe list is Empty\n");
        }
        else
        {
        ptr=head;
        head=head->next;
        free(ptr);
        }
}
void deletion_end()
{
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    temp=head->next;
    if(head==NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            ptr=ptr->next;
            temp=temp->next;
        }
        ptr->next=NULL;
        free(temp); 
    }  
}

void deletion_position()
{
    int index;
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the index to be deleted:\n");
    scanf("%d",&index);
    ptr=head;
    temp=head->next;
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        temp=temp->next;
    }
    ptr->next=temp->next;
    free(temp);

}
void display()
{
    struct node * ptr=(struct node*)malloc(sizeof(struct node));
    if (head==NULL)
    {
        printf("The list is empty!\n");
    }
    else
    {
        ptr=head;
        while (ptr!=NULL)
        {
            printf("Elements: %d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
        
    }
    
}

int main()
{
    int choice;
    while(1)
    {
        printf("---Menu---\n");
        printf("1.Insertion_First\n");
        printf("2.Insertion_End\n");
        printf("3.Insertion_Position\n");
        printf("4.Deletion_First\n");
        printf("5.Deletion_End\n");
        printf("6.Deletion_Position\n");
        printf("7.Display\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insertion_first();
                break;
            case 2:
                insertion_end();
                break;
            case 3:
                insertion_position();
                break;
            case 4:
                deletion_first();
                break;
            case 5:
                deletion_end();
                break;
            case 6:
                deletion_position();
            case 7:
                display();
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Invalid Choice!!");
                break;
        }
    }
    return 0;
}