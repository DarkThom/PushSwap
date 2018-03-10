/*
** push_swap_three.c for  in /home/BLENEA_T/Projects/CPE/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Nov 25 16:53:26 2016 Thomas BLENEAU
** Last update Sat Nov 26 16:29:40 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void		 my_swap_sb(t_list **begin)
{
  t_list        *list;
  t_list        *tmp;

  tmp = NULL;
  if (*begin == NULL)
    return ;
  list = *begin;
  tmp = list->next;
  if (tmp != NULL)
    {
      list->next = list->next->next;
      tmp->next = list;
      *begin = tmp;
    }
  my_putstr(" sb");
}

void		my_pb(t_list **lb, t_list **la)
{
  t_list	*tmp;

  tmp = *la;
  if (*la == NULL)
    return ;
  *la = (*la)->next;
  tmp->next = *lb;
  *lb = tmp;
  my_putstr(" pb");
}

void		rotate_rb(t_list **begin)
{
  t_list        *list;
  t_list        *tmp;

  list = NULL;
  if (*begin == NULL)
    return ;
  list = *begin;
  tmp = list->next;
  while (list->next != NULL)
    list = list->next;
  list->next = *begin;
  (*begin)->next = NULL;
  *begin = tmp;
  my_putstr(" rb");
}

void		rotate_rrb(t_list **begin)
{
  t_list        *list;
  t_list        *tmp;

  list = NULL;
  if (*begin == NULL)
    return ;
  list = *begin;
  while (list->next->next != NULL)
    list = list->next;
  tmp = list->next;
  tmp->next = *begin;
  list->next = NULL;
  *begin = tmp;
  my_putstr("rrb ");
}

void		my_start_pb(t_list **lb, t_list **la)
{
  t_list        *tmp;

  tmp = *la;
  if (*la == NULL)
    return ;
  *la = (*la)->next;
  tmp->next = *lb;
  *lb = tmp;
  my_putstr("pb");
}
