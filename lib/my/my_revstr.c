/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** Function that reverses a string.
*/

char  *my_revstr(char *str)
{
    int len_str;
    int a;
    int b;
    int stock_char;

    len_str = my_strlen(str);
    a = 0;
    b = len_str - 1;
    stock_char = ' ';
    while (a < b){
        stock_char = str[a];
        str[a] = str[b];
        str[b] = stock_char;
        a ++;
        b --;
    }
    return (str);
}
