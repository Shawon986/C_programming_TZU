#include <stdio.h>

int main()
{

//Q 1
/*
    int first,second,third,sum,multiply,average;
     printf("Enter three integers: ");
    scanf("%d %d %d", &first, &second, &third);

    // calculate the sum and product and average

    sum = first + second + third;
    multiply = first * second * third;
    average=(first+second+third)/3;

    printf("%d + %d +%d = %d is the sum number \n", first, second,third, sum);
    printf("%d * %d *%d = %d is the product number\n", first,second,third, multiply);
    printf("(%d + %d + %d)/3=%d is the average number \n",first,second,third,average);
*/

//Q 2

    char lower;
    printf("Enter any Uppercase charecter :");
    scanf("%c",&lower);
    printf("Here is the Lowercase character %c:\n",lower+32);


//Q 3
    int celcius;
    float fahrenheit_temp;
    printf("Enter a Fahrenheit temparature :");
    scanf("%d",&celcius);

    fahrenheit_temp = (celcius*9/5)+32;
    printf("(%d*9/5)+32=%f This is the Fahrenheit temparature",celcius,fahrenheit_temp);

    getch ();
}
