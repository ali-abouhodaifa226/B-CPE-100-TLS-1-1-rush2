/*
** EPITECH PROJECT, 2023
** my_strncat
** File description:
** Function that concatenates n characters of the src string.
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int lim_dest = 0;
    int i = 0;

    while (dest[lim_dest] != '\0'){
        lim_dest ++;
    }
    while (src[i] != '\0' && i < nb){
        dest[lim_dest + i] = src[i];
        i ++;
    }
    return (dest);
}
