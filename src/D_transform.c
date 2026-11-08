//转置矩阵

#include <stdio.h>

int main (void)
{
    int a[2][3]={1, 2, 3, 4, 5, 6}, b[3][2], s, t;

    printf("       矩阵A\n");
    for (s = 0; s < 2; s++)
    {
        for (t = 0; t < 3; t++)
        {
            printf("%5d", a[s][t]);
        }
        printf("\n");
    }

    for (s = 0; s < 2; s++)
    {
        for (t = 0; t < 3; t++)
        {
            b[t][s] = a[s][t];
        }
    }

    printf ("     矩阵B\n");
    for (t = 0; t < 3; t++)
    {
        for (s = 0; s < 2; s++)
        {
            printf ("%5d", b[t][s]);
        }
        printf ("\n");
    }

    return 0;
}