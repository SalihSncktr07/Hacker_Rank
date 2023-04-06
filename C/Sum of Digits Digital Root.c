#include <stdio.h>

int digital_root(int n)
{
    if (n < 0)
        n *= -1;
    int top = 0;
    while (n >= 10)
    {
        while (n)
        {
            top += n % 10;
            n /= 10;
        }
        n = top;
        top = 0;
    }
    return n;
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    int result = digital_root(n);
    printf("The digital root of %d is %d\n", n, result);
    return 0;
}

/*
    10  -->  1 + 0 = 1
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
*/
