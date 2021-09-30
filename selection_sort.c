#include<stdio.h>

int main()
{
    int n,arr[100],i,minindex,j,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    printf("---AFTER SORTING---\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}