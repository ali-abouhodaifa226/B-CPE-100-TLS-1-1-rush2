/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** Header file that contains all the prototypes of the functions in libmy.a
*/

#ifndef MY_H_
    #define MY_H_
void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
void my_swap(int, int);
int my_putstr(char const *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
int my_strlen(char const *);
char *my_strcapitalize(char *);
int my_getnbr(char const *);
int my_str_isalpha(char const *);
void my_sort_int_array(int *, int);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
int my_show_word_array(char const **);
int calcul_size_mem(int, char **);
char *concat_params(int, char **);
char *my_strdup(char const *);

#endif /* MY_H_ */
