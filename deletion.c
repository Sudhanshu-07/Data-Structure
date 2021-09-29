#include<stdio.h>

int main()
{
    int n,i,arr[100],del;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index of the value to be deleted:\n");
    scanf("%d",&del);
    for(i=del;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n-=1;
    printf("Element Deleted successfully!!\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}