#include<stdio.h>
int main (){
	int i ,j,r,c;
	printf(" enter the value for row and coloum :");
	scanf("%d%d",&r,&c);
	i=1;
	while(i<=r&&c){
	j=1;
	while(j<=i){
		printf("%d",j);
		j++;	
	}
	i++;
	printf(" \n");	}
	return 0;
}
