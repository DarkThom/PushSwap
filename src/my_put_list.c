/*
** my_aff_in_list.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 16 16:01:30 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:26:21 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void		my_show_list(t_list *begin)
{
  t_list	*tmp;

  tmp = begin;
  while (tmp != NULL)
    {
      my_put_nbr(tmp->nb);
      if (tmp->next == NULL)
	return ;
      write(1, " ", 1);
      tmp = tmp->next;
    }
}

t_list		*create_maillon(int nb)
{
  t_list	*element;

  element = malloc(sizeof(t_list));
  element->nb = nb;
  element->next = NULL;
  return (element);
}

t_list		*my_put_end_list(int ac, char **av)
{
  t_list	*element;
  t_list	*tmp;
  int		i;

  i = 1;
  element = NULL;
  element = malloc(sizeof(*element));
  element->nb = my_getnbr(av[i]);
  element->next = NULL;
  tmp = element;
  i = i + 1;
  while (i < ac)
    {
      tmp->next = create_maillon(my_getnbr(av[i]));
      tmp = tmp->next;
      i = i + 1;
    }
  return (element);
}
