/*
** my_free_space.c for  in /home/BLENEA_T/Projects/CPE/CPE_2016_Pushswap
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 12:50:46 2016 Thomas BLENEAU
** Last update Sat Nov 26 14:57:29 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	clear_list(t_list *list)
{
  if (list == NULL)
    return ;
  if (list->next != NULL)
    clear_list(list->next);
  free(list);
}

void		my_free_space(t_list **la, t_list **lb)
{
  clear_list(*la);
  *la = NULL;
  clear_list(*lb);
  *lb = NULL;
}
