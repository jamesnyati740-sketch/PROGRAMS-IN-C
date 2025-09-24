/*
Name:JAMES NYATI
REG NO:CT102/G/26799/25
DESCRIPTION:PROGRAM TO CALCULATE AREA OF A CIRCLE
*/
#include<stdio.h>


int main() {

   float Pi = 3.141592653589793;
   int radius ;

   printf("Enter the radius of the circle:\n");
   scanf("%d",&radius);

   printf("The area of the circle is :%.f\n",Pi*radius*radius);
   return 0;
}
