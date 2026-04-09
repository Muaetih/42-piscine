#include <unistd.h>

void ft_print_comb2(void)
{
    int a;
    int b;
    char dizaine;
    char unite;

    a = 0;
    b = 0;
    while (a < 100)
    {
        while (b < 100)
        {
            dizaine = '0' + (b / 10);
            unite = '0' + (b % 10);

            write(1,&dizaine,1);
            write(1,&unite,1);
            write(1," ",1);
            if (b == 99)
                write(1,", ",2);
            b++;
        }
        
        dizaine = '0' + (a /10);
        unite = '0' + (a % 10);

        write(1,&dizaine,1);
        write(1,&unite,1);
        write(1," ",1);
        a++;
    }

}