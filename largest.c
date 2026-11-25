#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c)
        printf("a %d is largest \n", a);
    else if (b>c)
        printf("b %d is largest \n", b);
    else
        printf("c %d is largest \n", c);
}