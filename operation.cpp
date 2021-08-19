#include<stdio.h>
int main (){
	int a=17 ,b =3 ,c = a+b , d = a * b ,e =a - b ,f = b-a , g =a % b ;
	float h=(float)a/(float)b;
	float r=(float)b/(float)a;
		printf ( " %d + %d =%d \n ",a ,b ,c);
	  printf ( " %d * %d =%d \n",a ,b ,d);
	  printf ( " %d - %d =%d \n",a ,b ,e);
	  printf ( " %d - %d =%d \n ",b ,a ,f);
printf ( " %d mod %d =%d \n ",a ,b ,g);
  printf ( " %d / %d =%f",a ,b ,h);
  printf(" %d / %d = %f \n " ,a,b,r);
	  return 0 ;
	
}
