#include <stdio.h>
#include <stdlib.h>

int main(void)

{

// Calculate even and odd

    int number ;
    printf("Enter an integer number ");
    scanf("%i",&number);

    if (number%2==0){
            printf("%i is an even number",number);

    }
    else {
            printf("%i is an odd number",number);
    }

// Calculate leap year

    int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

// feet to metre

   float feet,metres ;
   printf("Enter the length in feet : ");
   scanf("%f", &feet);

   metres = feet / 3.28;
   printf("%.2f is in metre",metres);

   getch ();



}
