#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *)s;
	while ((i >= 0) && (ptr[i] != (unsigned char)c))
		i--;
	if (ptr[i] == (unsigned char)c)
		return (&ptr[i]);
	return (NULL);
}
