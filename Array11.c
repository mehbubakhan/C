#include<stdio.h>
int main()
{
    int A[10];
    int B[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&A[i]);
    }
    printf("\nArray A:");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nArray B:");
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
        printf("%d ",B[j]);
    }

    return 0;
}

