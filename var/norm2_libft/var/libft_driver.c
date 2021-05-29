#include "../libft.h"
//#include <string.h>
#include <bsd/string.h> /* LINUX */
#include <stdio.h>

char		ft_upperize(unsigned int n, char c);

int	main(void)
{
	/*SUBSTR
	//char *str = ft_strdup("1");
	char *s;
	s = ft_substr("tripouille", 100, 1);
	//printf("%s\n", s);
	free (s);
	//free (str);
	*/

	/*SPLIT
	char **out = ft_split("--magic--dog--", 'A');
	int it = 0;
	while (out[it])
	{
		printf("%s\n", out[it]);
		free (out[it]);
		it++;
	}
	free (out);
	*/

	/*STRTRIM
	char *str = ft_strtrim("magic--dog", "-");
	printf("%s\n", str);
	free (str);
	*/

	/*STRMAPI
	char *out;
	out = ft_strmapi("magic", ft_upperize);
	printf("OUT\t\t%p\n", out);
	printf("%s\n", out);
	free (out);
	*/

	t_list **pfirst;
	t_list *list;
	t_list *new;

	list = ft_lstnew((void*)42);
	printf("list\t\t%p\n", list);
	pfirst = &list;
	new = ft_lstnew((void*)21);
	printf("new\t\t%p\n", new);
	ft_lstadd_front(pfirst, new);
	printf("first\t\t%p\n", *pfirst);
	printf("size\t\t%d\n", ft_lstsize(*pfirst));
	printf("last\t\t%p\n", ft_lstlast(*pfirst));

	t_list *new2;
	new2 = ft_lstnew((void*)84);
	printf("new2\t\t%p\n", new2);

	ft_lstadd_back(pfirst, new2);
	printf("last\t\t%p\n", ft_lstlast(*pfirst));
	printf("size\t\t%d\n", ft_lstsize(*pfirst));

	return (0);
}
