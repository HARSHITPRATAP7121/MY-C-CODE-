#include <stdio.h>
int main()
{   int i, j , r ;
    printf ("Enter the number of rows ");
    scanf ("%d",&r);
    i=1;
    while(i<=r){//outer while loop
        j=1;
        while(j<=i){
        printf(" ");
        printf("*");//print star
    j++;;
}
i++;
printf("\n");
    }
    return 0;
}
