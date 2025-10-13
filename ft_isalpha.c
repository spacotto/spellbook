int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) == 1 || ft_islower(c) == 1)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("ORIGINAL | %d\nCUSTOM   | %d\n", isalpha(atoi(av[1])), ft_isalpha(atoi(av[1])));
	return(0);
}
