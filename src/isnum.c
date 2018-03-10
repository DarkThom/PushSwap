/*
** isnum.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 23 22:50:50 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:24:37 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	isnum(char *str)
{
  int   i;

  i = 0;

  if (str == NULL || *str == '\0')
    return (84);
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
	return (84);
      i = i + 1;
    }
  return (1);
}
