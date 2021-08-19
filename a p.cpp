#include<stdio.h>
int main (){
	int a,b,d,n,s=0,z,i;
	i=a;
	printf(" enter the first ,second,no.of term of AP series :");
	scanf("%d%d%d",&a,&b,&n);
	d=b-a;
	z= (a + ( n - 1 ) * d);
	s = (n/2 * (2 * a + (n - 1)* d ));
	
	while( i<=z){
		i=a+d;
		i++;
	if ( i!=z)
	printf("%d + ",i);
	} 
	
	printf(" %d = %d ",i,s);
	return 0;}
