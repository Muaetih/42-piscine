#include "ft_str_is_lowercase.h"
#include <unistd.h>

int main(void)
{
    char c;

    c = '0' + ft_str_is_lowercase("hello");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_lowercase("Hello");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_lowercase("");
    write(1, &c, 1);
    write(1, "\n", 1);

    c = '0' + ft_str_is_lowercase("hello42");
    write(1, &c, 1);
    write(1, "\n", 1);

    return (0);
}