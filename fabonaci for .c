#include <stdio.h >
int main(){
	int a=0,b=1,t,n;
	printf (" enter the number for nth times :");
	scanf( "%d",&n);
	printf("%d %d  ",a ,b);
	for (int i=1;i<=n;i++)
	{ 
	t=a+b;
	a=b;
	b=t;
	printf("%d",t);
	}
	return 0;
	
}
