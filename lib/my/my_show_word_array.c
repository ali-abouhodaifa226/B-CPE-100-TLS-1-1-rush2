/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
**  Function that displays the content of an array of words.
*/

int my_show_word_array(char const **tab)
{
    int i = 0;

    while (tab[i] != 0){
        my_putstr(tab[i]);
        my_putchar('\n');
        i ++;
    }
    return (0);
}
