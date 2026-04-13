int ft_recurs(int nb, int power, int n)
{

    if (power >= 1)
        return (ft_recurs(nb, power - 1, n * nb));
    return n;

}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    if (power == 1)
        return nb;
    return ft_recurs(nb, power, nb);
}