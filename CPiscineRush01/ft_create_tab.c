/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:43:33 by maroy             #+#    #+#             */
/*   Updated: 2022/09/25 15:47:00 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char **ft_create_tab(char *str, int size)
{
	char	**tab;
	int	x;
	int	y;

	if(!(tab = malloc(size * sizeof(char*))))
		return(0);

	y = 0;
	while(y < size)
	{
		if (!(tab[y] = malloc((size * sizeof(char*)))))
	   		return(0);
		x = 0;
		while(x < size)
		{
			tab[x][y] = 0;
			x++;
		}
		x = 0;
		while (x < 4)
		{
			tab[y][size + x] = str[2 * (y+ x * size)] - '0';
			x++;
		}
		y++;
	}
	return (tab);
}
