/*
** my.h for  in /home/BLENEA_T/Projects/CPE_2021_Pushswap/include
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov  7 14:56:29 2016 Thomas BLENEAU
** Last update Sat Nov 26 17:46:22 2016 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Include de la libC
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
** Déclaration de ma liste
*/

typedef struct		s_list
{
  int			nb;
  struct s_list		*next;
}			t_list;


/*
** Prototypes de fonction création liste chaînée
*/

t_list	*my_put_end_list(int ac, char **av);
t_list	*my_top_in_list(t_list *list, int nb);
t_list	*create_maillon(int nb);
int	check_list_nb(t_list *la, t_list *lb);
int	my_list_size(t_list *begin);
int	my_rev_list(t_list **begin);
void	clear_list(t_list *list);
void	my_free_space(t_list **la, t_list **lb);
void	my_show_list(t_list *begin);
void	my_basic_algorithm(t_list **la, t_list **lb);

/*
** Prototypes de fonction pour algorithme
*/

void	my_swap_sa(t_list **begin);
void	my_swap_sb(t_list **begin);
void	my_swap_sc(t_list **la, t_list **lb);
void	rotate_ra(t_list **begin);
void	rotate_rb(t_list **begin);
void	rotate_rr(t_list **la, t_list **lb);
void	rotate_rra(t_list **begin);
void	rotate_rrb(t_list **begin);
void	rotate_rrr(t_list **la, t_list **lb);
void	my_pa(t_list **la, t_list **lb);
void	my_pb(t_list **lb, t_list **la);
void	my_start_sa(t_list **begin);
void	my_start_pb(t_list **lb, t_list **la);

/*
** Prototypes de fonction basique
*/

int	my_getnbr(char *str);
int	my_strlen(char *str);
int	isnum(char *str);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_put_nbr(int nb);

#endif /* !MY_H_ */
