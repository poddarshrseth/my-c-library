#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    (n%2==0)?printf("%d is Even \n ",n):printf("%d is Odd \n",n);
    return 0;
}