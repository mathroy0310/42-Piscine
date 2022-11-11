#include<stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int max = 200000000;
	int min = -200000000;
	int i = 0;
	int size = max - min;
	int *arr = ft_range(min, max);

	while (i  < size)
	{
		printf("%d\n",arr[i]);
		i++;
	}
}
