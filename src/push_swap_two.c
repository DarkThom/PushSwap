/*
** push_swap_two.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Nov 24 21:17:44 2016 Thomas BLENEAU
** Last update Sat Nov 26 16:17:53 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	my_swap_sc(t_list **la, t_list **lb)
{
  t_list        *list_a;
  t_list	*list_b;
  t_list        *tmp_a;
  t_list	*tmp_b;

  tmp_a = NULL;
  tmp_b = NULL;
  if (*la == NULL || *lb == NULL)
    return ;
  list_a = *la;
  list_b = *lb;
  tmp_a = list_a->next;
  tmp_b = list_b->next;
  if (tmp_a != NULL && tmp_b != NULL)
    {
      list_a->next = list_a->next->next;
      list_b->next = list_b->next->next;
      tmp_a->next = list_a;
      tmp_b->next = list_b;
      *la = tmp_a;
      *lb = tmp_b;
    }
  my_putstr(" sc");
}

void	rotate_rr(t_list **la, t_list **lb)
{
  t_list        *list_a;
  t_list	*list_b;
  t_list        *tmp_a;
  t_list	*tmp_b;

  list_a = NULL;
  list_b = NULL;
  if (*la == NULL || *lb == NULL)
    return ;
  list_a = *la;
  list_b = *lb;
  tmp_a = list_a->next;
  tmp_b = list_b->next;
  while (list_a->next != NULL && list_b->next != NULL)
    {
      list_a = list_a->next;
      list_b = list_b->next;
    }
  list_a->next = *la;
  list_b->next = *lb;
  (*la)->next = NULL;
  (*lb)->next = NULL;
  *la = tmp_a;
  *lb = tmp_b;
  my_putstr(" rr");
}

void	rotate_rrr(t_list **la, t_list **lb)
{
  t_list        *list_a;
  t_list	*list_b;
  t_list        *tmp_a;
  t_list	*tmp_b;

  list_a = NULL;
  list_b = NULL;
  if (*la == NULL || *lb == NULL)
    return ;
  list_a = *la;
  list_b = *lb;
  while (list_a->next->next != NULL && list_b->next->next != NULL)
    {
      list_a = list_a->next;
      list_b = list_b->next;
    }
  tmp_a = list_a->next;
  tmp_b = list_b->next;
  tmp_a->next = *la;
  tmp_b->next = *lb;
  list_a->next = NULL;
  list_b->next = NULL;
  *la = tmp_a;
  *lb = tmp_b;
  my_putstr(" rrr");
}
