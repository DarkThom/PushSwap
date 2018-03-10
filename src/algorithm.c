/*
** algorithm.c for  in /home/BLENEA_T/Projects/CPE/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Nov 25 15:09:55 2016 Thomas BLENEAU
** Last update Sat Nov 26 18:36:54 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int		sort_list_nb(t_list *la, t_list *lb)
{
  t_list	*list;
  int		i;

  i = 0;
  list = la;
  if (lb != NULL)
    i = i + 1;
  while (list != NULL && list->next != NULL && i <= 1)
    {
      if (list->nb > list->next->nb)
	i = i + 2;
      list = list->next;
    }
  return (i);
}

int		check_nb(t_list *list)
{
  t_list	*tmp;

  if (list == NULL)
    return (1);
  tmp = list;
  if (tmp->nb > tmp->next->nb)
    return (1);
  return (0);
}

void		my_basic_algorithm(t_list **la, t_list **lb)
{
  if (sort_list_nb(*la, *lb) != 0)
    {
      if (((*la) && (*la)->next != NULL) && (check_nb(*la) == 1))
	my_start_sa(la);
      else
	my_start_pb(lb, la);
    }
  while (sort_list_nb(*la, *lb) != 0)
    {
      if (sort_list_nb(*la, *lb) >= 2)
	{
	  if (((*la) && (*la)->next != NULL) && (check_nb(*la) == 1))
	    my_swap_sa(la);
	  else
	    my_pb(lb, la);
	}
      else
	{
	  if (((*lb) && (*la) && (*lb)->next != NULL) && (check_nb(*lb) == 0))
	    my_swap_sb(lb);
	  my_pa(la, lb);
	}
    }
}
