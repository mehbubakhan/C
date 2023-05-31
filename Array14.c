#include<stdio.h>
int main()
{
    int Array1[10];
    int Array2[10];
    int Array3[10];
    int i,n,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array1[i]);
    }
    scanf("%d",&v);
    for(i=0;i<v;i++)
    {
        scanf("%d",&Array2[i]);
    }
     for(i=0;i<n;i++)
    {
        Array3[i]=Array1[i];
        Array1[i]=Array2[i];
        Array2[i]=Array3[i];
    }
    printf("\nArray A:");
     for(i=0;i<v;i++)
    {
        printf("%d ",Array1[i]);
    }
    printf("\nArray B:");

     for(i=0;i<n;i++)
    {
        printf("%d ",Array2[i]);
    }
    return 0;
}
