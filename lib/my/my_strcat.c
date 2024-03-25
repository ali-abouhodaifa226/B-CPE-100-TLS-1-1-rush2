/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** Function that concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int lim_dest = 0;
    int i = 0;

    while (dest[lim_dest] != '\0'){
        lim_dest ++;
    }
    while (src[i] != '\0'){
        dest[lim_dest + i] = src[i];
        i ++;
    }
    return (dest);
}
