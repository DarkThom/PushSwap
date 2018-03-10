/*
** my_list_size.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 16 15:33:18 2016 Thomas BLENEAU
** Last update Sat Nov 26 16:11:53 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int		my_list_size(t_list *begin)
{
  t_list	*tmp;
  int		i;

  i = 0;
  tmp = begin;
  while (tmp != NULL)
    {
      tmp = tmp->next;
      i = i + 1;
    }
  return (i);
}
