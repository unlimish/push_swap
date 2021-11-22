#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

int	check_is_int(int ac, char **av);

# define ERR -1
# define OK 0

#endif
