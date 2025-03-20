#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = lst;
	(*del)(lst->content);
	lst = lst->next;
	free(tmp);
}
