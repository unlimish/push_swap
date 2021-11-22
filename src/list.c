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

void	add_list(t_list *list, int value)
{
	int		is_list_exist;
	t_list	*last_element;
	t_list	*new_element;

	last_element = NULL;
	new_element = NULL;
	is_list_exist = check_list(list);
	if (is_list_exist == ERR)
	{
		list = malloc_list();
		list->value = value;
		list->next = NULL;
		list->prev = NULL;
		return (list);
	}
	else
	{
		last_element = go_last_list(list);
		new_element = malloc_list();
		new_element->value = value;
		new_element->prev = last_element;
		new_element->next = NULL;
		last_element->next = new_element;
		return (list);
	}
}
