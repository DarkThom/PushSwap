/*
** my_end_list.c for  in /home/BLENEA_T/Projects/CPE/CPE_2016_Pushswap
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 15:47:46 2016 Thomas BLENEAU
** Last update Sat Nov 26 16:23:15 2016 Thomas BLENEAU
*/

#include "../include/my.h"

t_list		*my_end_list(t_list **begin)
{
  t_list	*list;
  t_list	*tmp_end;

  tmp_end = NULL;
  list = *begin;
  while (list->next != NULL)
    list = list->next;
  tmp_end = list->next;
  return (tmp_end);
}
