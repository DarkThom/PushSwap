/*
** my_getnbr.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 16 14:25:31 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:24:59 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	my_nb_neg(char *str)
{
  int   i;
  int   sign;

  i = 0;
  sign = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
	{
	  sign = sign + 1;
	}
      i = i + 1;
    }
  if (sign % 2 != 0)
    {
      return (1);
    }
  return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] < '0' || str[i] > '9')
    i = i + 1;
  while (str[i] <= '9' && str[i] >= '0')
    {
      if (nb * 10 + str[i] - 48 > 2147483647 || nb * 10 + str[i] - 48 < 0)
	{
	  nb = 0;
	  return (nb);
	}
      nb = nb * 10 + str[i] - 48;
      i = i + 1;
    }
  if (my_nb_neg(str) == 1)
    {
      nb = nb * -1;
    }
  return (nb);
}
