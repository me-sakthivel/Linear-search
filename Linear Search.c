#include <stdio.h>
int main ()
{
    int N,Arr[20],i,key;
    printf("Enter the number of elements present in array:");
    scanf("%d",&N);
    printf("Enter the array elements:");
    for (i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\nEnter the key to search:");
    scanf("%d",&key);
    for(i=0;i<N;i++)
    {
        if (Arr[i]==key)
        {
            printf("%d is present in this array\n",key);
            break;
        }
    }
    if (i==N)
        printf("elemenet not found");
    return 0;
}