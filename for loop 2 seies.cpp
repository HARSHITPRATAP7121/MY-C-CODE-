#include<stdio.h>
int main()
{
    int a=1,i,n;
    printf("Enter the n th term :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { printf( " %d ",a);
     a+=4;
    }
}
