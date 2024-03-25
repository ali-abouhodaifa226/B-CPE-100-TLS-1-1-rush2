/*
** EPITECH PROJECT, 2023
** my_isneg
** File description:
** A function that take an int in
** parameter. It displays 'N' if the
** number is negative and 'P' if it
** is positive or null.
*/

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
