#include <stdio.h>
#include <stdlib.h>
int main()
{
double a, b, result;
char op;

    printf("请输入两个数（如：“a * b”，请输入“a b”）：\n");
    scanf("%lf %lf", &a, &b);
    getchar();

    printf("请输入运算符号（+ - * /）：\n");
    scanf("%c", &op);
    getchar();

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
        default: printf("未知错误！！！\n");
    }

    printf("%g %c %g = %g\n", a, op, b, result);

return 0;
}