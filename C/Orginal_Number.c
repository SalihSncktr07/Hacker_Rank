#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 0;
    int num = atoi(av[1]);

    int a = num / 100;
    int b = num % 100;

    int res = 0;
    res = (a + b) * (a + b);
    if(res == num)
        printf("Orginal Number");
    else
        printf("Not Orginal Number");
}