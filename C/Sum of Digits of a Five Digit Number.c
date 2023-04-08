#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ft_sum(int n)
{
    int sum = 0;
    while(n >= 10000 && n <= 99999)
    {
        int sum = 0;
        if(n > 9)
        {
            ft_sum(n / 10);
            ft_sum(n % 10);
        }
        sum += n;    
    }
    return sum;
}

int main() {
	
    int n;
    int sum = ft_sum(n);
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
