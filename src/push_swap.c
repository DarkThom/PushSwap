/*
** push_swap.c for  in /home/BLENEA_T/Projects/CPE_2021_Pushswap
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov  7 15:00:50 2016 Thomas BLENEAU
** Last update Sat Nov 26 16:22:17 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void		my_swap_sa(t_list **begin)
{
  t_list	*list;
  t_list	*tmp;

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
  my_putstr(" sa");
}

void		my_pa(t_list **la, t_list **lb)
{
  t_list	*tmp;

  tmp = *lb;
  if (*lb == NULL)
    return ;
  *lb = (*lb)->next;
  tmp->next = *la;
  *la = tmp;
  my_putstr(" pa");
}

void		rotate_ra(t_list **begin)
{
  t_list	*list;
  t_list	*tmp;

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
  my_putstr(" ra");
}

void		rotate_rra(t_list **begin)
{
  t_list	*list;
  t_list	*tmp;

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
  my_putstr(" rra");
}

void		my_start_sa(t_list **begin)
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
  my_putstr("sa");
}
