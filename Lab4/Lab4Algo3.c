#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    system("clear");
    char choiceAlgo3;
    printf("0 to Exit\n");
    printf("1 to Calculate nPr\n");
    printf("2 to Calculate nCr\n");
    scanf("%c",&choiceAlgo3);

    if(choiceAlgo3 == '0')
    {
    /*
    0. Exit
    */
    printf("Exiting program!\n");
    }

    if(choiceAlgo3 == '1')
    {
    /*
    1. nPr = n! / (n-r)!
    */
    int n,r;
    printf("Enter the number n for calculating nPr : ");
    scanf("%d",&n);
    printf("Enter the number r for calculating nPr : ");
    scanf("%d",&r);
    if (n >= r ? (r >= 0 ? 1 : 0) : 0)
    {
        int nFact = tgamma(n+1);
        int nMrFact = tgamma(n-r+1);
        int nPr = nFact / nMrFact;
        printf("The nPr for n=%d and r=%d is %d\n", n, r, nPr);
    }
    else
    {
        printf("Invalid input!\n");
    }
    
    }

    if(choiceAlgo3 == '2')
    {
    /*
    2. nCr = n! / (r! * (n-r)!)
    */
    int n = 1;
    int r = 1;
    printf("Enter the number n for calculating nCr : ");
    scanf("%d",&n);
    printf("Enter the number r for calculating nCr : ");
    scanf("%d",&r);
    
    if (n >= r ? (r >= 0 ? 1 : 0) : 0)
    {
        int nFact = tgamma(n+1);
        int rFact = tgamma(r+1);
        int nMrFact = tgamma(n-r+1);
        int nCr = nFact / (rFact * nMrFact);
        printf("The nCr for n=%d and r=%d is %d\n", n, r, nCr);
    }
    else
    {
        printf("Invalid input!\n");
    }
    
    }

    return 0;
}