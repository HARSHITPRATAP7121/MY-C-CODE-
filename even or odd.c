 #include<stdio.h>
int main()
{
    int a,b;
 
    printf(" enter any number to check even or odd :");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
        printf("it is an even number : \n",a);
    else
        printf("it  is an odd number :",b);
        return 0;
}
