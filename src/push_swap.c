#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include "libft.h"

int	main(int ac, char **av)
{
	t_dlist	*list;
	int tmp_char_int;
	int	i;


	i = 1;
	tmp_char_int = -1;
	// if (ac >= 2)
	// 	return (0);
	if (ac < 2)
		return (-1);
	// check_is_int(ac, av);
	list = ft_list_malloc();
	while (i < ac)
	{
		while (**av == ' ')
			break;
		// printf("%s\n", av[i]);
		tmp_char_int = ft_atoi(av[i]);
		ft_list_add(list, tmp_char_int);
		i++;
	}
		ft_list_put(list);
}
