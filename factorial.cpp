#include<stdio.h>  
int main()    
{    
 int a=1,b,i=1;    
 printf("Enter any number: ");    
  scanf("%d",&b);    
    while (i<=b){    
      a=a*i;
	  i++;    
  }    
  printf("factorial of %d = %d",b,a);    
return 0;  
}   
