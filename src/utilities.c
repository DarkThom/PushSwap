/*
** utilities.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 23 08:53:48 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:24:13 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
