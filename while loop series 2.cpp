#include<stdio.h>
int main()
{
    int n,i=1,a =1;
    printf("Enter the n th term :");
    scanf("%d",&n);
    while(i<=n)
    { printf( " %d ",a);
     a+=3;
     i++;
    }
}
