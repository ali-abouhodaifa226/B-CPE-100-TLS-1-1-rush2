/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Function that prints an int in the terminal.
*/

int my_put_nbr(int nb)
{
    int a;

    a = nb % 10;
    if (nb > 9){
        my_put_nbr(nb / 10);
        my_putchar(a + 48);
    } else{
        my_putchar(nb + 48);
    }
    return (0);
}
