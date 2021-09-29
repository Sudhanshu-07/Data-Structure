#include<stdio.h>

int main()
{
    int n,i,value,arr[100],index;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to searched:\n");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            index=1;
            break;
        }
    }
    if(index==1)
    {
        printf("The %d element is present at %d position.",value,i);
    }
    else
    printf("The element is not present in the array!!");
    return 0;
}