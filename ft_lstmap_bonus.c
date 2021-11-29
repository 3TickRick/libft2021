#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*f_lst;

	tmp = NULL;
	f_lst = tmp;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&f_lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&f_lst, tmp);
	}
	return (f_lst);
}
