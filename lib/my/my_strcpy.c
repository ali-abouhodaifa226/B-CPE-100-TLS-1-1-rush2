/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** Function that copies a string into another.
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while ( src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
