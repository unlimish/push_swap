#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include "libft.h"

int	main(int ac, char **av)
{
	t_dlist	*list_a;
	t_dlist	*list_b;
	int tmp_char_int;
	int	i;
	int j;


	i = 1;
	tmp_char_int = -1;
	// if (ac >= 2)
	// 	return (0);
	if (ac < 2)
		return (-1);
	list_a = ft_list_malloc();
	list_b = ft_list_malloc();
	while (i < ac)
	{
		// printf("%s\n", av[i]);
		j = 0;
		while (av[i][j] != '\0')
		{
			if (!(('0' <= av[i][j]) &&(av[i][j] <= '9')))
				put_err(list_a, list_b);
			j++;
		}
		tmp_char_int = ft_atoi(av[i]);
		ft_list_add(list_a, tmp_char_int);
		i++;
	}
		ft_list_put(list_a);
		ft_list_del_all(list_a);
		ft_list_del_all(list_b);
}
