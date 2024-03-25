/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** Recursive function that returns the first
** argument raised to the power p.
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p < 0){
        return (0);
    }
    if (p == 0){
        return (1);
    }
    if (p == 1){
        return (nb);
    }
    result = nb * (my_compute_power_rec(nb, p - 1));
    return (result);
}
