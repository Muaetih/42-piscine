#include "ft_print_combn.h"
#include <unistd.h>

int main(void)
{
    ft_print_combn(2);
    write(1, "\n", 1);
    ft_print_combn(3);
    write(1, "\n", 1);
    ft_print_combn(5);
    return (0);
}