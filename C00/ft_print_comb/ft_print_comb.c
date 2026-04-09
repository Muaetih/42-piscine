#include <unistd.h>
#include "ft_print_comb.h"

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;
    b = 0;
    c = 0;
    while (a <= 7)
    {
        b = a+1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                char cha = '0' + a;
                char chb = '0' + b;
                char chc = '0' + c;
                write(1,&cha,1);
                write(1,&chb,1);
                write(1,&chc,1);
                if (!(a==7 && b==8 && c==9))
                {
                    write(1,", ",2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
