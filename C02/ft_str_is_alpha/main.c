#include <unistd.h>
#include "ft_str_is_alpha.h"

int main(void)
{
    char c;

    c = '0' + ft_str_is_alpha("Hello");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_alpha("Hello42");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_alpha("");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_alpha("abc!");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_alpha("ABC");
    write(1, &c, 1);
    write(1, "\n", 1);

    return (0);
}