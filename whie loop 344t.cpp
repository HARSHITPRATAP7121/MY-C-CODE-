#include <stdio.h>
int main()
{   int i, j , r,c ;
    printf ("Enter the number of rows and coloum ");
    scanf ("%d%d",&r,&c);
    i=1;
    while(i<=r&&c){
        j=1;
        while(j<=i){
        printf("  ");
        printf("*");
    j++;;
}
i++;
printf("\n");
    }
    return 0;
}
