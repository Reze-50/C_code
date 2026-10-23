#include <stdio.h>
int main()
{
    char letter;
    printf("输入一个大写字母，我将转化为小写字母：\n");
    scanf("%c", &letter);

    if((letter >= 'A') && (letter <= 'Z'))
    {
        letter += 32;
        printf("%c", letter);
    }
    else
    {
        printf("SB，输入大写字母！！！！！");
    }
    return 0;
}