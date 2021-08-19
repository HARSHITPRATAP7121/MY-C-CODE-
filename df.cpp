#include<stdio.h>
int main (){
	int a,b,d,n,s=0,z,i;
	i=a;
	printf(" enter the first ,second,no.of term of AP series :");
	scanf("%d%d%d",&a,&d,&n);
	z= (a + ( n - 1 ) * d);
	s = (n/2 * (2 * a + (n - 1)* d ));
	
	printf (" sum of ap is :");
	while( i<=z){
		i=a+d;
	if ( i!=z)
	printf("%d + ",i);
	i++;} 
	printf(" %d = %d ",i,s);
	return 0;}
