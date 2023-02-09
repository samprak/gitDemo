#include<stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    int choiceProblem5;
    printf("Enter the Number (1-10) of the Problem 5 : ");
    scanf("%d",&choiceProblem5);

    if(choiceProblem5 == 1)
    {
    /*
    1. 22.0/7.0
    */
        float pi;
        pi = 22.0/7.0;
        printf("The value of 22.0/7.0 is : %f\n", pi);
    }

    if(choiceProblem5 == 2)
    {
    /*
    2. 9 % 8
    */
        printf("The value of the remainder of 9 %% 8 is %d\n",9%8);
       
    }

    if(choiceProblem5 == 3)
    {
    /*
    3. 22 != 11
    */
        printf("The evaluation of 22 != 11 is %d\n", 22 != 11);
    }

    if(choiceProblem5 == 4)
    {
    /*
    4. 44 <= 70
    */
        printf("The evaluation of 44 <= 70 is %d\n", 44 <= 70);
    }

    if(choiceProblem5 == 5)
    {
    /*
    5. 44 || 0
    */
        printf("The evaluation of 44 || 0 is %d\n", 44 || 0);
    }

    if(choiceProblem5 == 6)
    {
    /*
    6. 77 && 8 && 9
    */
        int x = 77,y=8,z=9;
        printf("The evaluation of 77 && 8 && 9 is %d\n", x && y && z);
    }

    if(choiceProblem5 == 7)
    {
    /*
    7. ++8 + 1
    */
        int a = 8;
        printf("The evaluation of ++8 + 1 is %d\n", ++a + 1);
    }
    if(choiceProblem5 == 8)
    {
    /*
    8. -15 ^ -255
    */
        printf("The evaluation of -15 ^ -255 is %d\n", -15 ^ -255);
    }

    if(choiceProblem5 == 9)
    {
    /*
    9. -255 | 16
    */
        printf("The evaluation of 55 | 16 is %d\n", 55 | 16);
    }

    if(choiceProblem5 == 10)
    {
    /*
    10. -17 & 0
    */
        printf("The evaluation of -17 & 0 is %d\n", -17 & 0);
    }

    return 0;
}