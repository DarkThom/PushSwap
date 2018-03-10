/*
** my_spaces.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov 21 10:52:25 2016 Thomas BLENEAU
** Last update Fri Nov 25 17:09:50 2016 Thomas BLENEAU
*/

#include "../include/my.h"

char	*my_spaces(char *str)
{
  int	i;

  i = my_strlen(str) - 1;
  while (str[i] == ' ')
    {
      str[i] = '\0';
      i = i - 1;
    }
  return (str);
}
