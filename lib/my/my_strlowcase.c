/*
** EPITECH PROJECT, 2023
** my_strupcase
** File description:
** Function that puts every letter of every word
** in it in uppercase.
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i ++;
    }
    return (str);
}
