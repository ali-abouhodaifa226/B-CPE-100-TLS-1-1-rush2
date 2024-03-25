/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** Function that print the first int
** found in a string
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int index_number_begin = 0;
    int len_number = 0;

    while (str[i] < '0' || str[i] > '9'){
        i ++;
        if (str[i] == '\0')
            return (0);
    }
    index_number_begin = i;
    len_number = calcul_size(str, index_number_begin);
    return (len_number);
}

int calcul_size(char const *str, int i)
{
    char *stock;
    int count = 0;

    while (str[i] >= '0' && str[i] <= '9'){
        count ++;
        i ++;
    }
    return (count);
}
