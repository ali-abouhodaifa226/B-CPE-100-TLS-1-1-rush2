/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** Function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
