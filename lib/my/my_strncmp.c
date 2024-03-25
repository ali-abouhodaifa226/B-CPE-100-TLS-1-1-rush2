/*
** EPITECH PROJECT, 2023
** my_strncmp
** File description:
** Function that verify if n characters of a string are the same of a pattern.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int ascii1 = 0;
    int ascii2 = 0;
    int result = 0;

    while (s1[i] == s2[i] && i < n - 1 && i < my_strlen(s1)
            && i < my_strlen(s2)){
        i ++;
    }
    ascii1 = s1[i];
    ascii2 = s2[i];
    result = ascii1 - ascii2;
    return (result);
}
