#include<stdio.h>
int main (){
int a,i ,n;
printf (" enter the digit for n th term :");
scanf("%d",&n);
i=1;
do
{
printf(" %d  ",i*i);
i++;
} while (i<=n);

return 0;
}
