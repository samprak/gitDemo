/*
Write an Algorithm in C language to prove the statement ie.,
Left Shift Operator
(a << i == a*2i) and Derive the General Formula.
Write an Algorithm in C language to prove the statement ie..,
Right Shift Operator
(a >> i == a/2i) and Derive the General Formula.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    system("clear");
    //Left shift <<
    int a,i;
    int twoPower = 1;
    printf("Enter a number to be left shifted : ");
    scanf("%d",&a);
    printf("Enter a number to left shift by : ");
    scanf("%d",&i);
    printf("The left shifted number a: %d, by i: %d using left shift operator << is : %d\n",a, i, a << i);
    for(int j=1; j<=i; j++)
    {
        twoPower *= 2;
    }
    printf("2 to the power of i:%d is : %d\n", i, twoPower);
    printf("a:%d times 2 to the power of i:%d is : %d\n",a, i, a * twoPower);
    if((a << i) == (a * twoPower))
    {
        printf("Since a << i is equal to a * 2 power i, proved the general formula!\n");
    }

    //Right shift >>
    a = 0; i = 0;
    int OneBytwoPower = 1;
    printf("Enter a number to be right shifted : ");
    scanf("%d",&a);
    printf("Enter a number to right shift by : ");
    scanf("%d",&i);
    printf("The right shifted number a: %d, by i: %d using right shift operator >> is : %d\n",a, i, a >> i);
    for(int k=1; k<=i; k++)
    {
        OneBytwoPower *= 2;
    }
    printf("One by 2 to the power of i:%d is : %d\n", i, OneBytwoPower);
    printf("a:%d times One by 2 to the power of i:%d is : %d\n",a, i, a / OneBytwoPower);
    if((a >> i) == (a / OneBytwoPower))
    {
        printf("Since a >> i is equal to a / 2 power i, proved the general formula!\n");
    }
    return 0;
}