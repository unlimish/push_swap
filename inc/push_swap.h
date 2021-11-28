#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft.h"
# define ERR -1
# define OK 0

int			check_is_int(int ac, char **av);
void		put_err(t_dlist *list_a, t_dlist *list_b);

#endif
