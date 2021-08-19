 #include<stdio.h>
 int main (){
 	int a ,b ,l ,h;
 	// a= area of 4  walls  , b =breath , l= lenth ,h= hieght  : 
 	printf (" enter the value for l ,b  or h of walls : ");
 	scanf("%d%d%d",&b,&l,&h );
 	a= 2*(l+b)*h ;
 	
 	printf (" area of rectangle = %d \n",a );
 		 return 0;
 	}
