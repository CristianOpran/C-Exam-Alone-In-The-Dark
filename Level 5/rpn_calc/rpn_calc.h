#ifndef RPN_H
#define RPN_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef	struct		s_list
{
	int				val;
	struct s_list	*next;
}					t_list;

void	ft_lstadd(t_list **begin_list, int val);
void	ft_lstdel(t_list **begin_list);
int		ft_isnum(char *str);
int		ft_isop(char c);
int		ft_operate(t_list **begin_list, char c);

#endif
