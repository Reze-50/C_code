//calculator_own.c

#include<stdio.h>

int main()
{
    printf("\n+++++++++++++++++++++++++++\n");
    printf("+++++      计算器      +++++\n");
    printf("+++++++++++++++++++++++++++\n");

    double num1, num2, result;
    char op;

    do
    {
        printf("请输入式子（例如：5 - 6）：\n");
        scanf("%lf %c %lf",&num1, &op, &num2);
        getchar();

        switch(op)
        {
            case'+': result = num1 + num2; break;
            case'-': result = num1 - num2; break;
            case'*': result = num1 * num2; break;
            case'/': 
                if( num2 == 0)
                {
                    printf("除数不能为0！！！！\n"); continue;
                }
                else
                {
                result = num1 / num2; break;
                }
            default: printf("请输入正确的运算符号！！！\n");break;
        }

        printf("计算结果为：\n %g %c %g = %g\n 退出还是继续？（按“Q”退出，按任意键继续）\n", num1, op, num2, result);
    }
    while(getchar() != 'Q');

    printf("感谢使用！！！\n 再见！！！\n");
    return 0;
}