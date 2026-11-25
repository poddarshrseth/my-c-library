#include <stdio.h>

int main() {

    /*
    Topic 3. Conditional Statements
    Beginner
    1. Check whether a number is positive, negative or zero.
    2. Find the largest among three numbers.
    3. Check whether a year is a leap year.
    4. Check whether a character is a vowel or consonant.
    5. Check whether a character is uppercase, lowercase, digit or special character.
    6. Create a calculator using switch-case.
    7. Create a grading system based on examination marks.
    8. Calculate electricity bills using different consumption slabs.
    9. Check whether three sides can form a valid triangle.
    10. Identify the type of triangle: equilateral, isosceles or scalene.
    */

    //1. Check whether a number is positive, negative or zero.

    //2. Find the largest among three numbers.
    /*
    int a,b,c;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        printf("The largest number is %d \n",a);
    else if (b>a && b>c)
        printf("The largest number is %d \n",b);
    else
        printf("The largest number is %d \n",c);
    */

    //3. Check whether a year is a leap year. 
    /*
    int year;
    printf("Enter any desired year: ");
    scanf("%d",&year);
    if (year % 4 == 0 && year % 400 == 0)
    printf("The year %d is leap year \n",year);
    else 
    printf("the year %d is not a leap year \n",year);
    */

    //4. Check whether a character is a vowel or consonant. 
    /*
    char vowel;
    printf("Enter any character: ");
    scanf("%c",&vowel);
    if(vowel == 'a' || vowel == 'e' ||vowel == 'i' ||vowel == 'o' ||vowel== 'u')
    printf("The charcter %c is a vowel \n",vowel);
    else if (vowel == 'A' || vowel == 'E' ||vowel == 'I' ||vowel == 'O' ||vowel== 'U') 
    printf("The charcter %c is a vowel \n",vowel);
    else
    printf("The character %c is not a vowel \n",vowel); 
    */

    //5. Check whether a character is uppercase, lowercase, digit or special character. 

   /* 
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if (ch >= 65 && ch <= 90)
    printf("The character %c is UPPERCASE \n",ch);
    else if (ch >= 97 && ch <= 122)
    printf("The character %c is lowercase \n",ch);
    else if (ch >= 48 && ch <= 57)
    printf("The character %c is a digit \n",ch);
    else if ( ch >= 32 && ch <= 47 || ch >= 58 && ch<= 96)
    printf("The character %c is a special character \n",ch);
    else
    printf("The character %c is not recognized \n",ch);

    // SAME CASE IN APPLED FOR STRINGS

    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++) 
    {

        if (str[i] >= 'A' && str[i] <= 'Z') 
            printf("%c is Uppercase\n", str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z') 
            printf("%c is Lowercase\n", str[i]);
        else if (str[i] >= '0' && str[i] <= '9') 
            printf("%c is a Digit\n", str[i]);
        else 
            printf("%c is a Special Character\n", str[i]);
    }

     */

     //6. Create a calculator using switch-case.
    /*
     int a,b;
     char operator;
     printf("Enter two numbers: ");
     scanf("%d %d",&a,&b);
     printf("Enter the operator (+, -, *, /): ");
     scanf(" %c", &operator);
     switch(operator) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            printf("Result: %d\n", a / b);
            break;
        default:
            printf("Invalid operator!\n");
    }   
    */

    //7. Create a grading system based on examination marks.
    /*
    char name[50];
    int sub1,sub2,sub3,sub4,sub5,total;
    float percentage; 
    printf("Enter the students name: ");
    scanf("%49s", name);
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
   if (percentage >= 80) {
        printf("Student: %s has got %d marks and %.2f percentage\n", name, total, percentage);
        printf("Grade: A\n");
    } else if (percentage >= 60) {
        printf("Student: %s has got %d marks and %.2f percentage\n", name, total, percentage);
        printf("Grade: B\n");
    } else {
        printf("Student: %s has got %d marks and %.2f percentage\n", name, total, percentage);
        printf("Grade: C\n");
    }*/

    //8. Calculate electricity bills using different consumption slabs.

    /*
    float units;
    printf("Enter the Number of units cosumed: ");
    scanf("%f", &units);
    if (units >= 0 && units<= 100)
    printf("the total bill of consumed %.2f unit is %.2f",units,units*1.50);
    else if (units >= 101 && units<= 200)
    printf("the total bill of consumed %.2f unit is %.2f",units,units*2.50);
    else if (units >= 201 && units<= 300)
    printf("the total bill of consumed %.2f unit is %.2f",units,units*3.50);
    else if (units >= 301)
    printf("the total bill of consumed %.2f unit is %.2f",units,units*4.50);
 
    */

    //9. Check whether three sides can form a valid triangle.
    
    /*
    int s1,s2,s3;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 +s3 >s1)
    printf("The three sides can form a valid triangle.\n");
    else
    printf("The three sides cannot form a valid triangle.\n");
    
    */

    //10. Identify the type of triangle: equilateral, isosceles or scalene.

    int s1,s2,s3;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1==s2 && s2==s3)
    printf("the triangle is equilateral \n");
    else if(s1!=s2 && s2!=s3 && s1!=s3)
    printf("the triangle is scalene \n");
    else if(s1==s2 || s2==s3 || s1==s3)
    printf("the triangle is isosceles \n");

    return 0;
}