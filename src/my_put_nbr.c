/*
** my_put_nbr.c for  in /home/BLENEA_T/Piscine/CPool_workshoplib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Oct 21 19:08:21 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:27:11 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	my_digits(int nb)
{
  int	div;

  div = 1;
  while (nb > 9)
    {
      nb = nb / 10;
      div = div * 10;
    }
  return (div);
}

void	my_put_nbr(int nb)
{
  int	div;

  if (nb < 0 && nb != -2147483648)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb == -2147483648)
    write(1, "-2147483648", 11);
  div = my_digits(nb);
  while (div != 0 && nb != -2147483648)
    {
      my_putchar(nb / div + 48);
      nb = nb % div;
      div = div / 10;
    }
}
