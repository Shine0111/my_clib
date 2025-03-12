#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*last;

	size = ft_lstsize(lst) - 1;
	if (!lst)
		return (NULL);
	while (size--)
		lst = lst->next;
	last = lst;
	return (last);
}
