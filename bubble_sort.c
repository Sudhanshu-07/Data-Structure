#include<stdio.h>

int main()
{
    int arr[100],i,j,n,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

    printf("---AFTER SORTING---\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",arr[i]);
    }
    return 0;
}