/*
** EPITECH PROJECT, 2023
** concat_params
** File description:
** Function that turns the command-line given arguments into a single string.
*/

#include <stdlib.h>

int calcul_size_mem(int argc, char **argv)
{
    int i = 0;
    int count = 0;

    while (argv[i] != 0){
        count = count + my_strlen(argv[i]) + 1;
        i ++;
    }
    count ++;
    return (count);
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int count = 0;
    char *str;

    str = malloc(sizeof(char) * calcul_size_mem(argc, argv));
    while (i < argc){
        while (argv[i][j] != 0){
            str[count] = argv[i][j];
            j ++;
            count ++;
        }
        j = 0;
        str[count] = '\n';
        count ++;
        i ++;
    }
    str[count - 1] = '\0';
    return (str);
}
