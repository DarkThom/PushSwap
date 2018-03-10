/*
** main.c for  in /home/BLENEA_T/Projects/CPE_2016_Pushswap
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Nov 23 20:26:18 2016 Thomas BLENEAU
** Last update Sat Nov 26 21:31:58 2016 Thomas BLENEAU
*/

#include "./include/my.h"

int	my_check_params(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac == 1)
    return (84);
  while (i != ac)
    {
      if (isnum(av[i]) != 1)
	return (1);
      i = i + 1;
    }
  return (0);
}

int		main(int ac, char **av)
{
  t_list        *la;
  t_list	*lb;

  la = NULL;
  lb = NULL;
  if (my_check_params(ac, av))
    return (84);
  la = my_put_end_list(ac, av);
  if (la != NULL)
    {
      if (my_list_size(la) != 1)
	my_basic_algorithm(&la, &lb);
      write(1, "\n", 1);
    }
  else
    return (0);
  my_free_space(&la, &lb);
  return (0);
}
