/*
NAME:JAMES NYATI
REG NO:CT102/G/26799/25
DESCRIPTION:PROGRAM TO CALCULATE SIMPLE INTEREST
SI=PRINCIPLE*RATE/100*TIME
*/
#include <stdio.h>
//main fuction
int main()
{
    printf("Wel.come t0 this calculation site:\n");

    double principal;//lf
    float  rate;//f
    float  time ;//f


    printf("Enter principle amount:\n");
    scanf("%lf", &principal);

    printf("Enter rate of interest in percentage:\n");
    scanf("%f", &rate);

    printf("Enter time in years:\n");
    scanf("%f",&time);


    printf("Therefore the simple interest is :");
    printf("  %.2lf", principal*rate/100*time);

    return 0;
}