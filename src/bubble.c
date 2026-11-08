//冒泡排序

#include <stdio.h>

int main (void)
{
    int a[11];
    int i, j, t;

    printf ("11个数 冒泡排序\n");
    for (i = 0; i < 11; i++)
    {
        printf ("第%d个数:", i + 1);
        scanf ("%d", &a[i]);
    }
    printf ("\n");

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10 - j; i++)
        {
            if (a[i] > a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }

    printf ("这是排列后的数:\n");
    for (i = 0; i < 11; i++)
    {
        printf ("%d ", a[i]);
    }
    printf ("\n");

    return 0;
}