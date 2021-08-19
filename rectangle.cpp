 #include<stdio.h>
 int main (){
 	int a ,b ,l ,p;
 	// a= area , b =breath , l= lenth ,p = perimeter of he rectangle : 
 	printf (" enter the value for l and b of rectangle : ");
 	scanf("%d%d",&b,&l );
 	a= l*b;
 	p=2*(l+b);
 	printf (" area of rectangle = %d \n",a );
 		printf ("perimeter of rectangle = %d \n",p );
 		 return 0;
 	}
