#include "push_swap.h"

t_list	*malloc_list(void)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		exit(ERR);
	return (list);
}

int	check_list(t_list *list)
{
	if (list == NULL)
		return (ERR);
	else
		return (OK);
}


t_list	*go_last_list(t_list *list)
{
	while (list->next != NULL)
		list = list->next;
	return (list);
}

