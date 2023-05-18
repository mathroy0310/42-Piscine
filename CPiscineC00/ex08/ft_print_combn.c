/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:15:48 by maroy             #+#    #+#             */
/*   Updated: 2023/05/18 16:46:08 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

static int	ft_strlen(char *tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

static void	ft_print_tab(char *tab, int n)
{
	int	i;

	i = 0;
	if (tab[0] == '9' + 1 - n)
		while (tab[i] && tab[i] != ',')
			write(1, &tab[i++], 1);
	else
		while (tab[i])
			write(1, &tab[i++], 1);
}

static void	ft_runtime(int n, char *tab)
{
	int	j;

	while (tab[0] <= '9' + 1 - n)
	{
		ft_print_tab(tab, n);
		j = n - 1;
		if (tab[j] < '9')
			tab[j]++;
		else
		{
			while (tab[j] == '9' - (n - j - 1) && j != 0)
				j--;
			if (j != n - 1 && j >= 0)
				tab[j++]++;
			while (j < n)
			{
				tab[j] = tab[j - 1] + 1;
				j++;
			}
		}		
	}
}

void	ft_print_combn(int n)
{
	char	tab[12];
	int		i;

	if (n < 1 || n > 9)
		return ;
	if (n == 1)
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
		return ;
	}
	i = 0;
	tab[0] = '0';
	while (++i < n)
		tab[i] = tab[i - 1] + 1;
	tab[i] = ',';
	tab[i + 1] = ' ';
	tab[i + 2] = 0;
	ft_runtime(n, tab);
}
