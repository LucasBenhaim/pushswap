/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** return a number
*/

int check_nb(char c, int nb, int sign)
{
    if (nb > 214748364)
        return (0);
    if (((nb == 214748364) && (c > '7') && (sign == 1))\
        || ((nb >= 214748364) && (c > '8') && (sign == -1)))
        return (0);
    return (1);
}

int    my_getnbr(char const *str)
{
    int    i = 0;
    int    sign = 1;
    int    nb = 0;

    for (; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            sign *= -1;
    }
    for (; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (check_nb(str[i], nb, sign) == 0)
                return (0);
            nb *= 10;
            nb += str[i] - '0';
        }
        else
            return (nb * sign);
    }
    return (nb * sign);
}
