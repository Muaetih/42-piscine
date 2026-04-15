#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int is_valid(int *tab, int col, int ligne)
{
    int i;

    i = 0;
    while (i < col)
    {
        //meme ligne ?
        if (tab[i] == ligne)
            return 0;
        if (ft_abs(col - i) == ft_abs(ligne - tab[i]))
            return 0;
        i++;
    }
    return 1;
}

void ft_ten_queens_puzzle_recur(int *tab, int *res, int col)
{
    int ligne;
    int j;

    if (col == 10)
    {
        j = 0;
        while (j < 10)
        {
            ft_putchar(tab[j] + '0');
            j++;
        }
        ft_putchar('\n');
        (*res)++;
        return ;
    }
    ligne = 0;
    while (ligne < 10)
    {
        if (is_valid(tab, col, ligne))
        {
            tab[col] = ligne;
            ft_ten_queens_puzzle_recur(tab, res, col + 1);
        }
        ligne++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int tab[10];
    int i;
    int res;

    i = 0;
    res = 0;
    while (i < 10)
    {
        tab[i] = -1;
        i++;
    }
    ft_ten_queens_puzzle_recur(tab, &res, 0);
    return (res);
}

int main(void)
{
    ft_ten_queens_puzzle();
    return 0;
}