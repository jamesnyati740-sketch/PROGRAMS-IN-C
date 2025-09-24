/*
 NAME :  JAMES NYATI
 REG NO:CT102/G/26799/25
 DESCRIPTION:PROGRAM TO PROMPT THE USER TO ENTER NAME,HEIGHT,BALANCE
 */

#include<stdio.h> // scanf();printf()
//main function
int main(){
  // Declaring variables
     char name; //%s
    int height ;// %d
    double balance;//%lf
 //prompting the user

    printf("Enter your name:\n ", name);
    scanf("%S",&name);

    printf("Enter your height:\n",height );
    scanf("%d",&height);

    printf("Enter your bank balance\n", balance);
    scanf("% .2lf",&balance);



    printf("The height length is %d\n", height);
    printf("The remaining balance is % .2lf ", balance);

return 0;
}