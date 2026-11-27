#include <stdio.h>

int main() {

    /*
    LOOPS(for, while, do-while) and their applications:
    1.Print numbers from 1 to N.
    2.Print even numbers between 1 and 100.
    3.Find sum of first N natural numbers.
    4.Calculate factorial using loops.
    5.Reverse an integer.
    6.Count digits in an integer.
    7.Find sum of digits.
    8.Check whether a number is prime.
    9.Print all primes between 1 and N.
    10.Generate a multiplication table.
    */

    //1. Print numbers from 1 to N.
    /*
    int n;
    printf("Enter the N0: ");
    scanf("%d", &n);
    //we will use for loop to print numbers from 1 to N.
    for(int i=1;i<=n;i++)
    {
        printf("%d\n", i);
    }
    */

    //2. Print even numbers between 1 and 100.
    /*
     int n;
     for(int i=1;i<=100;i++)
     {
        if(i%2==0)
        {
            printf("Even no between 1 and 100: %d\n", i);
        }
     }
    */

    //3. Find sum of first N natural numbers.
    /*
    int n,sum=0;
    printf("Enter the N0: ");
    scanf("%d", &n); 
    for(int i=1;i<=n;i++)
    {
        sum=i+sum;  
    }
    printf("The sum of first N natural numbers is %d \n",sum);
    */

    //4. Calculate factorial using loops.

    /*
    /*
    int n,fact=1;
    printf("Enter the N0: ");
    scanf("%d", &n); 
    for(int i=1;i<=n;i++)
    {
        fact=i*fact;  
    }
    printf("Factorial of N numbers is %d \n",fact);
    */
    //doing factorial using while
    /*
    int n,fact=1,i=1;
    printf("Enter the N0: ");
    scanf("%d", &n);
    while(i <= n)
    {
      fact = i * fact;
      i++;
    }
    printf("Factorial of N is %d\n", fact);
    */
    
    //5. Reverse an integer.
    /*
    int digit,n,rev=0;
    printf("Enter any interger No: ");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("the reversed no is %d",rev);
    */
    
    //6. Count digits in an integer.
    /*
    int n,count=0,res=0;
    printf("Enter any interger No: ");
    scanf("%d",&n);
    res=n;
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("No of digit in %d integer is %d \n",res,count);
    */

    //7. Find sum of digits.
    /*
    int n,digit,sum=0;
    printf("Enter any interger No: ");
    scanf("%d",&n);
    int res;
    res =n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("the sum of the digits of %d number is %d \n",res,sum);
    */

    //8. Check whether a number is prime.
    /*
    int n,i=2,prime=1;
    printf("Enter ANY Number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        prime==1;
    }
    else
    {
        do
        {
            if(n%i==0)
            {
                prime = 0;
                break;
            }
            i++;
        }while(i<n);
    }
    if(prime==0)
    printf("the no %d is not a prime \n",n);
    else
    printf("the no %d is a prime \n",n);
    */

    //9. Print all primes between 1 and N.
   /*
    int n, i = 2, j, flag;

    printf("Enter limit: ");
    scanf("%d", &n);

       if (n >= 2)
    {
        do
        {
            flag = 0;
            j = 2;

            if (i > 2)
            {
                do
                {
                    if (i % j == 0)
                    {
                        flag = 1;
                        break;
                    }

                    j++;

                } while (j < i);
            }

            if (flag == 0)
            {
                printf("%d ", i);
            }

            i++;

        } while (i <= n);
    }
        */

        //10. Generate a multiplication table.

        int i=1,n,m;
        printf("Enter the No whose multiplication table you want: ");
        scanf("%d",&n);
        do
        {
            m = n * i;
            printf("%d x %d = %d \n",n,i,m);
            ++i;
        }while(i<=10);
    return 0;
}