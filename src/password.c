//password-string

#include <stdio.h>
#include <string.h>

int main (void)
{
    char str_in [100], password [] = "wdf666";
    int i = 4;

    puts("*******************************");
    puts("            PASSWORD           ");
    puts("*******************************");

    while( i > 0 )
    {
        puts("\nPlease enter your password: ");
        scanf( "%s", str_in);

        if (strcmp( str_in, password) != 0)
        {
            i--;

            if ( i == 0 )
            {
                puts ("\nOops, something wrong! You have no more chances!\n");
            }
            else
            {
                printf("\nERROR! Only %d chances left.\n", i);
            }
        }
        else
        {
            puts("\nWelcome to the system!\n");break;
        }
    }

    return 0;
}