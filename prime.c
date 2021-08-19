#include<stdio.h>
int main (){
	int a ;
	printf ("enter any number :");
	scanf("%d",&a);
	if(a%2==1){ 
	printf (" a is a prime mumber \n" ,a);}
	else{
		printf (" a is not prime number \n",a);
	}
	return 0;
}
