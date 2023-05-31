#include<stdio.h>
int main()
{
    int Array[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }
    int Position;
    scanf("%d",&Position);
    for(i=Position;i<n;i++)
    {
            Array[i]=Array[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",Array[i]);
    }
    return 0;
}
