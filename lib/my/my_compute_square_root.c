/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** Function that returns the square root
** (if it is a whole number) of the number given as argument.
*/

int my_compute_square_root(int nb)
{
    int max_int_sqrt;
    int i;

    max_int_sqrt = 46341;
    i = 1;
    if (nb < 0){
        return (0);
    }
    while (i * i != nb && i < max_int_sqrt){
        i ++;
    }
    if (i < max_int_sqrt){
        return (i);
    } else{
        return (0);
    }
}
