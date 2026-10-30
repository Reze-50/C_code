#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a, b, result;
    char op;

    printf("\n*****************************************\n");
    printf("*                 计算器                *\n");
    printf("*****************************************\n");

    do
    {
        printf("请输入需要计算的式子（如：“a * b”）：\n");
        scanf("%lf %c %lf", &a, &op, &b);
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
                continue;
            }
            else
            {
                result = a / b; break;
            }
            default: 
                printf("未知错误！！！\n");
                continue;
        }

        printf("%g %c %g = %g\n", a, op, b, result);
        printf("退出还是继续？（按“ Q ”退出，按任意键以继续）\n");
    }
    while (getchar() != 'Q');

    printf("感谢使用！！！");
    return 0;
}