#include<stdio.h>
#include<stdlib.h>
int main(){
	char c ;
	while(1){
	
	printf(" enter your choice + - / * mod or 0 for exit:");
	scanf("%c",&c);
		switch(c){
		case '+': {
		     int a,b;
			printf(" enter a=");
			scanf("%d",&a);
				printf("\n enter b= ");
			scanf("%d",&b);
			int c=a+b;
			printf("c=%d",c);
			break;}
		case '-': {
	              int a,b;
			printf(" enter a=  ");
			scanf("%d",&a);
				printf(" enter b=  ");
			scanf("%d",&b);
			int c=a-b;
			printf("c=%d",c);
			break;}
		case '*': {
			int a,b;
			printf(" enter a= ");
			scanf("%d",&a);
				printf(" enter b=  ");
			scanf("%d",&b);
			int c=a*b;
			printf("c=%d",c);
			break;}
		case '/': {
	          int a,b;
			printf(" enter a=  ");
			scanf("%d",&a);
				printf(" enter b=  ");
			scanf("%d",&b);
			int c=a/b;
			printf("c=%d",c);
			break;}
		case '%': {
	         int a,b;
			printf(" enter a= ");
			scanf("%d",&a);
				printf(" enter b=  ");
			scanf("%d",&b);
			int c=a%b;
			printf("c=%d",c);
			break;}
		case '0' : exit (0); break;
		default : printf("invalid choice");					
	}
	}
	return 0;
}
