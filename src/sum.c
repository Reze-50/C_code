#include <stdio.h>
int main(void)
{
    printf("*************************************\n");
    double a,b,sum;
    printf("现在Enter two numbers (a b):");
    scanf("%lf+%lf",&a,&b);
    sum = a + b;
    printf("%.8f + %.8f = %.8f\n",a,b,sum);
    printf("*************************************\n");
    return 0;
}