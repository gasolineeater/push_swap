#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

/* Data Structures */
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}				t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}				t_stack;

/* Stack Functions */
t_stack	*init_stack(void);
void	free_stack(t_stack *stack);
int		push_to_stack(t_stack *stack, int value);
int		pop_from_stack(t_stack *stack);

/* Parse and Validation */
int		parse_args(int argc, char **argv, t_stack *stack_a);
int		ft_atoi_safe(const char *str, int *result);
int		has_duplicates(t_stack *stack);
int		is_sorted(t_stack *stack);

# endif
