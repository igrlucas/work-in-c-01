#include <stdio.h>

int main()
{

    int a, b, c, validation = 0;

    printf("What is the length of a side of triangle A?");
    scanf("%d", &a);

    printf("What is the length of a side of triangle B?");
    scanf("%d", &b);

    printf("What is the length of a side of triangle C?");
    scanf("%d", &c);

    validation = (a < b + c) && (b < a + c) && (c < a + b);

    if (validation)
    {

        if ((a == b) && (b == c))
        {
            printf("Equilateral");
        }
        else if ((a == b) || (a == c) || (b == c))
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0; 
}
