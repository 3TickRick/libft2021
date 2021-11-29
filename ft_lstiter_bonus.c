#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmpnext;

	while (lst)
	{
		tmpnext = lst->next;
		f(lst->content);
		lst = tmpnext;
	}
}
