#include<stdio.h>

int main()
{
    int n,i,arr[100],low,mid,high,value;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched:\n");
    scanf("%d",&value);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<high)
    {
        if(arr[mid]<value)
            low=mid+1;
        else if(arr[mid]==value)
        {
            printf("%d is found at position %d",value,mid);
            break;
        }
        else
        high=mid-1;
        mid=(low+high)/2;
    }
    if(low>high)
    {
        printf("%d is not present in the array.",value);
    }
    return 0;

}