#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number ;
    printf("Enter an integer number ");
    scanf("%i",&number);

    if (number%2==0){
            printf("%i is an even number",number);

    }
    else {
            printf("%i is an odd number",number);
    }
    return 0;
}
