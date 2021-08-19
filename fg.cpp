#include<stdio.h>
int main(){ int p=1;
	for(int i=1;i<=5;i++)
	{
		for (int j=1; j<=p ;j++){
		if(j%2==1)printf(" ");
		else
		printf("*");}
		printf("\n");
		p=p+2;
	}
	
	return 0;
}
