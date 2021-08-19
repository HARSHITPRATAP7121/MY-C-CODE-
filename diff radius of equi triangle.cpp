#include<stdio.h>
int main (){
	float  a ,i ,r ;
	/* a =side of equi triangle , i = radius of incircle , 
	r = radius of circumcircle */ 
	printf (" enter the value for side of equi triangle :");
	scanf("%f",&a);
	i =a/(2*1.73);
	r=a/1.73;
	printf (" radius of incirle of an equilateral triangle =%f \n ", i);
	printf (" radius of circumcirle of an equilateral triangle =%f \n ", r);
	return 0;
	}
