/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** Function that copies n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n <= my_strlen(src)){
        while (i < n){
            dest[i] = src[i];
            i++;
        }
    } else{
        while (src[i] != '\0'){
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (dest);
}
