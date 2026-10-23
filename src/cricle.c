#include <stdio.h>
#define pi 3.14

int main()
{
    float r, circumference, area;
    
    printf("请输入圆的半径 r:\n");
    scanf("%f", &r);
    
    circumference = 2 * pi * r;
    area = pi * r * r;
    
    // 注意这里是 %.2f ，点号！
    printf("圆的周长为: %.2f\n", circumference);
    printf("圆的面积为: %.2f\n", area);
    
    return 0;
}