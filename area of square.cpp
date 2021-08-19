#include<stdio.h>
int main (){
	int s ,a ,p ,v ;
	// a = area of square 
	// p =perimeter of square
	//s= side of a square 
	printf ("Enter the value of side:") ;
	scanf ("%d" , &s);
	a =s*s; 
	printf ("area of square =%d \n",a  );
	p=4*s;
	printf ( "perimeter of square = %d \n" ,p);
	v=s*s*s;
	printf(" volume of square = %d ",v);
	return 0 ;
}
