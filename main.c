/*
** EPITECH PROJECT, 2023
** Rush2
** File description:
** Function to make test
*/

#include <stddef.h>
#include "my.h"

int count_letter(char *str)
{
    int i = 0;
    int nb_letter = 0;

    while (str[i] != '\0'){
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z'))
            nb_letter ++;
        i ++;
    }
    return nb_letter;
}

void print_frequencies(int count, char *str)
{
    int nb_letter = count_letter(str);
    int int_part = (count * 100) / nb_letter;
    int dec_part = ((count * 10000) / nb_letter) - (int_part * 100);

    my_putchar('(');
    my_put_nbr(int_part);
    my_putchar('.');
    if (dec_part < 10){
        my_putchar(0 + 48);
        my_put_nbr(dec_part);
    } else{
        my_put_nbr(dec_part);
    }
    my_putchar('%');
    my_putchar(')');
}

void search_letter(char *str, char letter)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0'){
        if ((letter == str[i]) || ((letter + 32 == str[i])
            && (letter >= 'A')) || ((letter - 32 == str[i])
            && (letter >= 'a'))){
            count ++;
        }
        i ++;
    }
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar(' ');
    print_frequencies(count, str);
    my_putchar('\n');
}

int verif_error(int argc, char **argv)
{
    int i = 2;

    if (argc <= 2){
        write(2, "Number of arguments invalid.\n", 29);
        return 1;
    }
    while (argv[i] != NULL){
        if (my_strlen(argv[i]) > 1){
            write(2, "Arguments has to be letter.\n", 28);
            return 1;
        }
        if ((argv[i][0] > 'z' || argv[i][0] < 'a') &&
            (argv[i][0] > 'Z' || argv[i][0] < 'A')){
            write(2, "Argument is not a letter.\n", 28);
            return 1;
        }
        i ++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int i = 2;
    char *str = argv[1];
    char letter;

    if (verif_error(argc, argv) == 1)
        return (84);
    while (argv[i] != NULL){
        letter = argv[i][0];
        search_letter(str, letter);
        i ++;
    }
    return (0);
}
