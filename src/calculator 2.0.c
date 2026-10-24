#include <stdio.h>
#include <stdlib.h>
int main()
{
double a, b, result;
char op;

    printf("请输入需要计算的式子（如：“a * b”）：\n");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op)
    {
        case '+' : result = a + b; break;
        case '-' : result = a - b; break;
        case '*' : result = a * b; break;
        case '/' : 
        if(b == 0)
        {
            printf("除数为零！！！\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            result = a / b; break;
        }
        default: 
            printf("未知错误！！！\n");
            break;
    }

    printf("%g %c %g = %g\n", a, op, b, result);

return 0;
}