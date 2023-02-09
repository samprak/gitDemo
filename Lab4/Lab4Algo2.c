#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    system("clear");
    char choiceAlgo2;
    printf("Enter the Letter (A-I) of the Question Alog 2 : ");
    scanf("%c",&choiceAlgo2);
    printf("\n");

    if(choiceAlgo2 == 'a' || choiceAlgo2 == 'A')
    {
    /*
    A. Write an Algorithm in C Language to find 
    the given input year is leap year or not.
    */
        short int leapYearOrNo;
        printf(" Enter the Year for Leap year check : ");
        scanf("%hd",&leapYearOrNo);
        if(leapYearOrNo%100 == 0)
        {
            if(leapYearOrNo%400 == 0)
            {
                printf("The year %d is a leap year!\n",leapYearOrNo);
            }
            else
            {
                printf("The year %d is not a leap year!\n",leapYearOrNo);
            }
        }
        else
        {
            if(leapYearOrNo%4 == 0)
            {
                printf("The year %d is a leap year!\n",leapYearOrNo);
            }
            else
            {
                printf("The year %d is not a leap year!\n",leapYearOrNo);
            }
        }
    }

    if(choiceAlgo2 == 'b' || choiceAlgo2 == 'B')
    {
    /*
    B. Write an Algorithm in C Language to find 
    whether a given input number is a positive 
    number or negative number?
    */
       int numPosNeg;
       printf("Enter Number to test Negatavity : ");
       scanf("%d",&numPosNeg);
       if(numPosNeg < 0)
       {
            printf("The number %d is a negative number\n",numPosNeg);
       }
       else
       {
            printf("The number %d is a positive number.\n",numPosNeg);
       }
    }

    if(choiceAlgo2 == 'c' || choiceAlgo2 == 'C')
    {
    /*
    C. Write an Algorithm to find the largest number 
    in the given 3 input numbers using && operator 
    only. (Note : Take a,b,c as inputs)
    */
       int a,b,c;
       printf("Enter first number a : ");
       scanf("%d",&a);
       printf("Enter first number b : ");
       scanf("%d",&b);
       printf("Enter first number c : ");
       scanf("%d",&c);
        if(a>b && a>c)
        {
            printf("a : %d is the largest number\n",a);
        }
        if(b>a && b>c)
        {
            printf("b : %d is the largest number\n",b);
        }
        if(c>a && c>b)
        {
            printf("c : %d is the largest number\n",c);
        }
    }

    if(choiceAlgo2 == 'd' || choiceAlgo2 == 'D')
    {
    /*
    D. Write a C program that demonstrates the 
    Comma Operator in C. You are free to take any
    example.
    */
        int p = 35;
        int q = (p++, ++p);
        printf("Demonstration of the comma operator :\n");
        printf("When p = 35 and q = (p++, ++p), q's value = %d\n",q);
    }

    if(choiceAlgo2 == 'e' || choiceAlgo2 == 'E')
    {
    /*
    E. Write a C program that demonstrates the 
    sizeof operator in C. You are free to take 
    any example.
    */
        char c = 107 ;
        short int i = 200;
        printf("sizeof(short int i) = %lu Bytes, and sizeof(char c) = %lu Byte\n",sizeof(i),sizeof(c));
        printf("Though size of short int i is 2 Bytes and size of char c is 1 Byte, size of (i + c) = 4 Bytes! sizeof(i+c) = %lu Bytes\n",sizeof(i+c));
        printf("     \n");
        printf("The size of short int : %lu Bytes\n",sizeof(short int));
        printf("The size of unsigned short int : %lu Bytes\n",sizeof(unsigned short int));
        printf("The size of unsigned int : %lu Bytes\n",sizeof(unsigned int));
        printf("The size of int : %lu Bytes\n",sizeof(int));
        printf("The size of long int : %lu Bytes\n",sizeof(long int));
        printf("The size of unsigned long int : %lu Bytes\n",sizeof(unsigned long int));
        printf("The size of long long int : %lu Bytes\n",sizeof(long long int));
        printf("The size of unsigned long long int : %lu Bytes\n",sizeof(unsigned long long int));
        printf("The size of signed char : %lu Bytes\n",sizeof(signed char));
        printf("The size of char : %lu Bytes\n",sizeof(char));
        printf("The size of unsigned char : %lu Bytes\n",sizeof(unsigned char));
        printf("The size of float : %lu Bytes\n",sizeof(float));
        printf("The size of double : %lu Bytes\n",sizeof(double));
        printf("The size of long double : %lu Bytes\n",sizeof(long double));
    }

    if(choiceAlgo2 == 'f' || choiceAlgo2 == 'F')
    {
    /*
    F. Write a C program that demonstrates the operator precedence 
    using a precedence chart. Take proper expressions to demonstrate
    the precedence and demonstrate the priorities and differences
    during 1-1 interview call. (Note : Take at least 6 expression
    examples)
    */
        //assignment operator: Assignment Operators	= += -= *= /= %= >>= <<= &= ^= |=	right-to-left
        int x = 50;
        x = x *= 2;
        //Since precedence is right to left the value of x should be 100, lets check
        printf("x = 50, Value of x = x*=2, x = %d\n", x);
        x = 50;
        x += x = 500;
        //Since precedence is right to left the value of x should be 1000 not 100;
        printf("x = 50, Value of x += x = 500, x = %d\n", x);
        x  = 50;
        x *= x -= 30;
        //Since precedence is right to left the value of x should be 400 not 2470;
        printf("x = 50, Value of x *= x -= 30, x = %d\n", x);
        x  = 50;

        //Binary Operators are left to right
        int a = 10, b = 11, result;
        result = a++ < b && a == b-- && a > b;
        //Since the precedence is left to right this should be 1
        printf("For a=10 and b=11, result = a++ < b && a == b-- && a > b the result = %d\n", result);

        //Binary Operators * / % left to right
        a = 4, b = 5, result=0;
        int c = 35;
        result = a * b / 2 % 3 * c;
        // The result should be 35 even though by the BODMAS rule Division should come before Multiplication!!
        printf("a=4,b=5 and c=35; result = a * b / 2 %% 3 * c; result = %d\n",result);

        //Primary Expression Operators	() [] . -> expr++ expr--	left-to-right
        a=1,b=2,c=3,result=0;
        result = (a++ * b++) * (a++ * b++ + c) + (a-- + c--);
        // result should be 24
        printf("a=1,b=2,c=3, result = (a++ * b++) * (a++ * b++ + c) + (a-- + c--); The result = %d", result);
    }

    if(choiceAlgo2 == 'g' || choiceAlgo2 == 'G')
    {
    /*
    G. Write an Algorithm in C to read a character in lower case and 
    then print it in upper case.
    */
        char inputChar;
        printf("Enter any char (a-z, A-Z) : ");
        scanf(" %c",&inputChar);
        printf("The character you entered in upper case is : %c\n",toupper(inputChar));
    }

    if(choiceAlgo2 == 'h' || choiceAlgo2 == 'H')
    {
    /*
    H. Write an Algorithm in C to swap the two integer
    numbers using XNOR.
    */
        int a, b;
        printf("Enter first number :");
        scanf("%d",&a);
        printf("Enter second number :");
        scanf("%d",&b);
        printf("Numbers entered before swapping : %d %d\n",a,b);
        a = a ^ b; b = a ^ b; a = a ^ b;
        printf("Numbers after swapping : %d %d\n",a,b);
    }

    if(choiceAlgo2 == 'i' || choiceAlgo2 == 'I')
    {
    /*
    I. Write an Algorithm in C to convert Celsius into 
    Fahrenheit temperature
    */
        float degCelsius, fahrenheit;
        printf("Enter degree Celsius temperature to make F :");
        scanf("%f",&degCelsius);
        //F=C*9/5+32;
        fahrenheit = degCelsius*9/5+32;
        printf("Fahrenheit equivalent of Degree Celsius temperature %0.2f deg C is %0.2f\n",degCelsius,fahrenheit);
    }
    printf("\n");
    return 0;
}