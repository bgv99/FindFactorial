#include <stdio.h>

int main()
{
    int n, result = 1;

    printf("n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }

    printf("Factorial of %d is: %d\n", n, result);

    return 0;
}