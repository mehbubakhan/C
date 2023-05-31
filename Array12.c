#include<stdio.h>
int main()
{
   int Array[10];
   int i,n,j;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&Array[i]);
   }
   int Num,Position;
   scanf("%d\n",&Num);
   scanf("%d",&Position);
   for(i=n-1;i>=Position;i--)
   {
       if(i==Position)
       {
           Array[i+1]=Array[i];
           Array[i]=Num;
       }
       else
       {
           Array[i+1]=Array[i];
       }
   }
   for(i=0;i<=n;i++)
   {
       printf("%d ",Array[i]);
   }


   return 0;
}
