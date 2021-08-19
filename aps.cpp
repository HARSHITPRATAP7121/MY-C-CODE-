  #include <stdio.h>
  int main (){
	int a,b,d,n,s;
	//i=a;
	printf(" enter the first ,second,no.of term of AP series :");
	scanf("%d%d%d",&a,&b,&n);
	d=b-a;
//	z= a + ( n - 1 ) * d;
	s = (n * (2 * a + (n - 1)* d ))/2 ;
	
//	while( i<=z){
//		i=a+d;
//		
//	printf("%d + ",i);
//	} 
//	printf (" sum of ap is :");
	printf(" sum=%d ",s);
	return 0;}  
