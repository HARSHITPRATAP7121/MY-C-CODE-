#include<stdio.h>
int main (){
	int a,d,n,s,z,i;
	i=a;
	printf(" enter the first ,second,no.of term of AP series :");
	scanf("%d%d%d",&a,&d,&n);
	z= (a + ( n - 1 ) * d);
	s = (n/2 * (2 * a + (n - 1)* d ));
	
	while( i<=z){
		i=a+d;
		i++;
	if ( i!=z)
	printf("%d + ",i);
	} 
	printf (" sum of ap is :");
	printf(" %d = %d ",i,s);
	return 0;}
