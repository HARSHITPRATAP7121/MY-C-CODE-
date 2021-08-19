#include <stdio.h>
int main()
{   int i, j , r,c ;
    printf ("Enter the number of rows and coloum ");
    scanf ("%d%d",&r,&c);
    i=1;
    while(j<=r&&c){
        j=1;
        while(j<=i){
        printf("%d ",j);
    j++;;
}
i++;
printf("\n");
    }
    return 0;
}
