#include "ft_str_is_numeric.h"
#include <unistd.h>

int main(void)
{
    char c;

    c = '0' + ft_str_is_numeric("12345");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_numeric("123a5");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_numeric("");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_numeric("000");
    write(1, &c, 1);
    write(1, "\n", 1);

    return (0);
}