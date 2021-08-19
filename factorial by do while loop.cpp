#include<stdio.h>  
int main()    
{    
 int a=1,b,i=1;    
 printf("Enter any number: ");    
  scanf("%d",&b);    
    do{    
      a=a*i;
	  i--;    
  }   while (i>=b) ;
  printf("factorial of %d = %d",b,a);    
return 0;  
} 
