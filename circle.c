#include<stdio.h>
float pi = 3.14;
int main()
{
    float r,area;
    printf("enter the radius of the circle  =");
    scanf("%f",&r);
    area = pi*r*r;
    printf("area of the circle = %f \n",area); 
    return 0;
}