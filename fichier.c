/*
** EPITECH PROJECT, 2025
** rush02
** File description:
** counting the number of occurence
*/
#include <stdio.h>
int my_putchar
{
    write (1, &, 1)
        return 0;
}

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_put_nbr(nb % 10 + '0');
}                           
int count_char(char c)
{
    int count;
    int i = 0;
    for (i=0;str[i] != '0\'; i++)
        {
            if (str[i] == c) {
                count ++;
                }
         return count;
        }
    my_putchar(argument[2]);
    my_putchar(":");
    my_putchar(count);
    my_put_nbr(count);
}
int main(argument[1]; char *try[])
{
    int  count = count_char(try[1], char try[2][0]);
    my_putchar(count);
    return 0;
}
