#include <stdio.h>
#include <stdlib.h>

int main()
{
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

    return 0;
}
