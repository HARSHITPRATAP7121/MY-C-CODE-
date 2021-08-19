#include <stdio.h>
int main(){
     int i, j , r;
    printf ("Enter the number of rows : ");
    scanf ("%d",&r);
    i=1;
    do
    {
        j=1;
        while(j<=i){
        printf("%d ",i);
    j++;;
}
i++;
printf("\n");
    }while(i<=r);
    return 0;
}
