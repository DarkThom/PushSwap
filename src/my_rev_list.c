/*
** my_rev_list.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 16 11:57:40 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:27:31 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	my_rev_list(t_list **begin)
{
  t_list	*list;
  t_list	*result;
  t_list	*tmp_result;

  list = *begin;
  result = NULL;
  while (list->next)
    {
      tmp_result = list->next;
      list->next = result;
      result = list;
      list = tmp_result;
    }
  list->next = result;
  *begin = list;
  return (0);
}
