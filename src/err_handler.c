#include <stdio.h>
#include "push_swap.h"
#include "libft.h"

int check_is_int(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	printf("%s", *av);
	while (*av[i] != '\0')
	{
		j = 0;
		if (ac == i)
			return (OK);
		while (av[i][j] != '\0')
		{
			if (*av[i] <= '0' && *av[i] >= '9')
				return (ERR);
			j++;
		}
		i++;
	}
	return (0);
}

void	put_err(t_dlist *list_a, t_dlist *list_b)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	ft_list_del_all(list_a);
	ft_list_del_all(list_b);
	exit (ERR);
}
