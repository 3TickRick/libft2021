#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmpnext;

	while (*lst && lst)
	{
		tmpnext = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmpnext;
	}
}
