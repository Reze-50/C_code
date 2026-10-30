#include<stdio.h>

int main()
{
    int sum, num;
    
    for(num = 1, sum = 0; num <= 100; num++)
    {
        sum += num;
    }

    printf("1+2+3...+100 = %d\n", sum);

    return 0;
}