#include<stdio.h>
int main()
{ int a,b,temp;
printf("Enter value of a :");
scanf("%d",&a);
printf("\nEnter value of b :");
scanf("%d",&b);
 printf("\nbefore swapping a=%d,b=%d",a,b);
 temp=a;
 a=b;
 b=temp;
printf("\nafter swapping a=%d,b=%d",a,b);
return 0;
}
