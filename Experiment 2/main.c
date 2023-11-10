#include <stdio.h>
#include <stdlib.h>

int main()
{

    //task 1

      // Declare variables for coefficients
    float a, b, c;

    // Prompt the user to enter coefficients
    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    // Calculate the discriminant
    float delta = b * b - 4 * a * c;

    // Calculate the two roots
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);

    // Print the roots in the required format
    printf("Roots: %.2f %.2f\n", fmax(x1, x2), fmin(x1, x2));

    //task 2

     // Declare variables for three integers
    int x, y, z;

    // Prompt the user to enter three integers
    printf("Enter three integers (x, y, z) separated by commas: ");
    scanf("%d, %d, %d", &x, &y, &z);

    // Sort the integers in ascending order
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    if (y > z) {
        int temp = y;
        y = z;
        z = temp;
    }

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Output the sorted integers separated by spaces
    printf("Sorted: %d %d %d\n", x, y, z);





    return 0;
}

