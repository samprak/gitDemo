/*
Write an Algorithm in C Language to solve the given quadratic equation in the
form of ax2 + bx + c = 0 where the coefficients of a,b,c should be taken using
scanf functions.
● Print the roots of the quadratic equation
● Print the Discriminant value (b2-4ac)
● Print the Sum of roots (-b/a)
● Print the Product of roots (c/a)
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,d,sqrtd,sr,pr;
    system("clear");
    printf("Enter the coefficient value of the quadratic equation (a) : ");
    scanf("%f",&a);
    printf("Enter the coefficient value of the quadratic equation (b) : ");
    scanf("%f",&b);
    printf("Enter the coefficient value of the quadratic equation (c) : ");
    scanf("%f",&c);
    /*
    Solution:
    x = (-b +- sqrt(b*b-4*a*c)) / 2*a*c
    */
   d = (b*b)-(4*a*c);
   sqrtd = sqrt(d);
   sr = -(b/a);
   pr = c/a;
   x1 = (-b - sqrtd) / (2*a);
   x2 = (-b + sqrtd) / (2*a);
   printf("The Roots of the quadratic equation : %0.4f, %0.4f\n",x1,x2);
   printf("The Discriminant value : %0.0f\n",d);
   printf("The Sum of roots : %0.0f\n",sr);
   printf("The Product of roots : %0.0f\n",pr);
    return 0;
}