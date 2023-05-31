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
    for(i=0;i<n;i++)
    {
        if(Array[i]%3==0)
        {
            Array[i]=-1;
        }
        printf("%d ",Array[i]);
    }
    return 0;
}
