#include <stdio.h>

int main()
{
    printf("Hello world!\n");

    // Function to print value taken from user
/*
    int num;
    printf("Enter an integer number");
    scanf("%d",&num);
    printf("you have pressed %d\n",num);

    float num1;
    printf("Enter a float number :");
    scanf("%f",&num1);
    printf("you have pressed %f\n",num1);

    double num3;
    printf("Enter the value for double :");
    scanf("%lf",&num3);
    printf("You have pressed %lf\n",num3);

    char name;
    printf("Enter your name");
    scanf("%s",&name);
    printf("You have pressed :%c",name);
    */

    int first,second,third,sum,multiply,average;
     printf("Enter three integers: ");
    scanf("%d %d %d", &first, &second, &third);

    // calculate the sum and product and average

    sum = first + second + third;
    multiply = first * second * third;
    average=(first+second+third)/3;

    printf("%d + %d +%d = %d is the sum number \n", first, second,third, sum);
    printf("%d * %d *%d = %d is the product number\n", first,second,third, multiply);
    printf("(%d + %d + %d)/3=%d is the average number",first,second,third,average);






    /*
    int i ;
    float f;
    double d;
    char c;

    printf("size of i : %d bytes \n",sizeof(i));
    printf("size of f : %d bytes \n",sizeof(f));
    printf("size of d : %d bytes \n",sizeof(d));
    printf("size of c : %d bytes \n",sizeof(c));

    */

    //ASCII to Character
    /*
    int n;
    printf("Enter an ASCII value :");
    scanf("%d",&n);
    printf("Here is the character value :%c",n);

    */




    getch ();
}
