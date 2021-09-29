#include<stdio.h>

int main()
{
    int n,i,value,index,arr[100];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
    }
    printf("Enter the value to be inserted:\n");
    scanf("%d",&value);
    printf("Enter the index:\n");
    scanf("%d",&index);
    for(i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;
    n+=1;
    printf("Number inserted successfully!!\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}