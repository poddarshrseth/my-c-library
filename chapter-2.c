#include <stdio.h>

int main() {

    /*
    Topic 2. Operators and Expressions
    Beginner
    1. Swap two numbers using arithmetic operators.
    2. Swap two numbers using bitwise XOR.
    3. Find the largest of two numbers using the conditional operator.
    4. Check whether a number is divisible by both 5 and 11.
    5. Calculate the last digit of an integer.
    6. Remove the last digit of a number using arithmetic operators.
    7. Evaluate an expression using operator precedence.
    8. Check whether a number is positive using a relational operator.
    9. Demonstrate the difference between pre-increment and post-increment.
    10. Write a program to calculate the result of a mathematical expression using different operators.    
    */

    //1. Swap two numbers using arithmetic operators.
    
    /*int a,b,swap;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("After swapping: %d %d \n",a,b);*/

    //2. swap two numbers usings bitwise XOR.


     /*int a,b;
     printf("Enter the two no's : ");
     scanf("%d %d",&a,&b);
     printf("Nos before swapping: %d %d \n",a,b);
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     printf("Nos after swapping: %d %d \n",a,b);*/

     //3. Find the largest of two numbers using the conditional operator.

     /* 
     int a,b;
     printf("Enter two numbers: ");
     scanf("%d %d", &a, &b);
     // using if - else-if -else
     if (a > b)
        printf("Largest No is %d \n ",a);
     else if (b > a)
        printf("Largest No is %d \n",b);
     else
        printf("Both numbers are equal.\n");

    //using ternary operator
    // (a>b?printf("Largest No is %d \n",a):printf("Largest No is %d \n",b));
     */

     // 4. Check whether a number is divisible by both 5 and 11. 

    /* int a,b;
     printf("Enter the Number: ");
     scanf("%d",&a);
     if (a % 5 == 0 && a % 11 == 0)
     
       printf("Entered no is divisible by both 5 and 11 \n");
     else if (a % 5 == 0 && a % 11 != 0)
       printf("Entered No is divisible by 5 but not 11 \n");
     else if (a % 5 != 0 && a % 11 == 0)
     printf("Entered no is divisible by 11 but not 5 \n");
     else
        printf("Entered no is not divisible by both 5 and 11 \n");
     */
    
    //5. Calculate the last digit of an integer.

    /*
    int a;
    printf("Enter the Number: ");
    scanf("%d",&a);
    printf("Last digit of the no is %d \n",a%10);
    */

    // 6. Remove the last digit of a number using arithmetic operators. 
    /*
    int n,last;
    printf("Enter the Number: "); 
    scanf("%d",&n);
    last=n/10;
    printf("Number after removing the last digit is %d \n",last);
    */

    // 7.  Evaluate an expression using operator precedence.

    // 8. Check whether a number is positive using a relational operator.
    /*
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if (n>0)
      printf("The no %d is positive. \n",n);
    else if (n<0)
      printf("The no %d is negative. \n",n); 
    else
      printf("the no is zero. \n");
    return 0;
    */

    // 9. Demonstrate the difference between pre-increment and post-increment.
    /*
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
     //pre increment
    printf("No after pre-increment: %d \n",++n);
    //post increment
    printf("No after post-increment: %d \n",n++);
    */

    // 10. Write a program to calculate the result of a mathematical expression using different operators.  
    int result;
    printf("Mathematical Expression: ");
    printf("25 + 12 * 4 - 36 / 6 + 15 % 4 : \n");
    result=25 + 12 * 4 - 36 / 6 + 15 % 4;
    printf("Result: %d\n", result); 
 
return 0;

} 


