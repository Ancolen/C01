#include <io.h>

void	ft_putstr(int *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}	
}

int main()
{
	ft_putstr("STDOUT");
}