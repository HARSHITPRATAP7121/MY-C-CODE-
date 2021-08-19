#include<stdio.h>
int main(){
	int a=1,b=1,n ;
	printf(" enter the n th term :");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	if(i%2==0)
	{
	printf("%d ",b*b);
	b++;
	}
	else{
		printf("%d ",a);
		a=a+3;
	}
		}
		
	
	return 0;
}
