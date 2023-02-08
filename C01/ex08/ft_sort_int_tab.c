
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		size--;
	}
}

int main()
{
    int tab[5] = {3,1,0,4,2};
    int size = 5;

    ft_sort_int_tab(tab, size);

    size = 0;

    while(tab[size] <=4)
    {
        printf("%d",tab[size]);
        size++;
    }

    return (0);
}