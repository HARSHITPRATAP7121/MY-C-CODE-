# include <stdio.h>
int main (){

	int a ,b ,h ;
	float e ,s ;
	/* a = area of triangle , b = base , h= height ,
	e= area of equilateral triangle , s = side of equilateral triangle  */
   printf(" enter the value of b or h for triangle :");
	scanf (" %d%d" ,&b,&h);
	a=(b*h)/2 ;
	printf (" area of triangle =%d\n",a);
	scanf ("%f",&s);
	e = 1.73 *(s*s)/4;
	
	printf(" area of equilateral triangle = %f \n ", e );
	return 0;
}
