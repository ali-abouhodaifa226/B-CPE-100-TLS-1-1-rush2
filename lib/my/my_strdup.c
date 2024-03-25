/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** Function that allocates memory and copies the string
** given as argument in it.
*/

char *my_strdup(char const *src)
{
    char *str;
    int size = my_strlen(src);
    int i = 0;

    str = malloc(1 * size);
    while (i < size){
        str [i] = src[i];
        i ++;
    }
    str[i] = '\0';
    return (str);
}
