#include<stdio.h>
int main()
{
    /*
    Topic 1. Variables, Data Types and Input/Output
    Beginner
    1. Write a program to input your name, age and city and display them.
    2. Write a program to calculate the sum of two integers.
    3. Write a program to calculate the average of five numbers.
    4. Write a program to convert Celsius into Fahrenheit.
    5. Write a program to convert kilometres into metres and centimetres.
    6. Write a program to calculate the area and perimeter of a rectangle.
    7. Write a program to calculate simple interest.
    8. Write a program to calculate the total and percentage of five subjects.
    9. Write a program to display the size of all fundamental C data types using sizeof().
    10. Write a program to demonstrate implicit and explicit type conversion.*/

    //1. Write a program to input your name, age and city and display them.
    /*int age;
    char name[50],city[50];
    printf("Enter your name Age and City:");
    scanf("%s %d %s",name ,&age ,city);
    printf("NAME : %s\n",name);
    printf("AGE: %d \n",age);
    printf("CITY: %s \n",city);*/

    //2. Write a program to calculate the sum of two integers.

    /*int a,b,sum;
    printf("Enter two intergers : ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("Sum of a and b is %d \n",sum);*/

    //3. Write a program to calculate the average of five numbers.

    /*int n1,n2,n3,n4,n5;
    float avg;
    printf("Enter the five integers: ");
    scanf(" %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    avg = (n1+n2+n3+n4+n5)/5.0;
    printf("The Average of the five integer is %f \n",avg);*/

    //4. Write a program to convert Celsius into Fahrenheit.

    /*float cel,fah;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&cel);
    fah = (cel *9/5)+32;
    printf("the temperatute of %f celsius is %f in fahrenheit \n",cel,fah);*/

    //5. Write a program to convert kilometres into metres and centimetres.

    /*int km,m,cm;
    printf("Enter the distance in km: ");
    scanf("%d",&km);
    m = km* 1000;
    cm = km * 100000;
    printf("%d km in m is : %d \n",km,m);
    printf("%d km in cm is : %d \n",km,cm);*/

    //6. Write a program to calculate the area and perimeter of a rectangle.

    /*int length,breadth,area,perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&length); 
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);
    area = length * breadth; 
    perimeter = 2 *(length+breadth);
    printf("Area of the rectangle is %d \n",area); 
    printf("Perimeter of the rectangle is %d \n",perimeter);*/

    //7. Write a program to calculate simple interest.

    /*int p,r,t;
    // p = principle ; r = rate ; t = time
    float si;
    // si = simple interest
    printf("Enter the principal amount in rupees: ");
    scanf("%d",&p);
    printf("Enter the rate of interest (in %): ");
    scanf("%d",&r);
    printf("Enter the time ( in years): ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("Simple interest is %f \n",si);*/

    //8. Write a program to calculate the total and percentage of five subjects.

    /*int sub1,sub2,sub3,sub4,sub5,total;
    float percentage; 
    printf("Enter the marks scored in subject 1 out of 100: ");
    scanf("%d",&sub1);   
    printf("Enter the marks scored in subject 2 out of 100: ");
    scanf("%d",&sub2);  
    printf("Enter the marks scored in subject 3 out of 100: ");
    scanf("%d",&sub3);  
    printf("Enter the marks scored in subject 4 out of 100: ");
    scanf("%d",&sub4);  
    printf("Enter the marks scored in subject 5 out of 100: ");
    scanf("%d",&sub5);    
    total = sub1+sub2+sub3+sub4+sub5;
    percentage = total*(1.0/5.0);
    printf("Total marks obtained: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);*/

    //9. Write a program to display the size of all fundamental C data types using sizeof().

    /*printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));*/

    //10.Write a program to demonstrate implicit and explicit type conversion.

    //implicit type conversion
    int a = 10;
    float b = 5.5;
    float result = a + b;
    printf("Result = %f \n", result);

    //explicit type conversion
    int c= 10;
    int d = 3;
    float f_result;
    f_result = (float)c / d;
    printf("Result = %f \n", f_result);
    return 0;
}
