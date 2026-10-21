#include <stdio.h>
int main(void)
{
    float num_1 = 0, num_2 = 0, quotient = 0;
    
    printf("*************************\n");
    printf("请输入两个数(用空格隔开):\n");
    scanf("%f %f", &num_1, &num_2);

    if( 0 == num_2 )
    {
        printf("无效输入！！！\n");
        return 1;
    }

    quotient = num_1  / num_2;
    printf("%g / %g = %g\n", num_1, num_2, quotient);
    printf("*************************\n");
    
    return 0;
}