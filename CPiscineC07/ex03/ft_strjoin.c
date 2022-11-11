/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:02:59 by maroy             #+#    #+#             */
/*   Updated: 2022/10/06 16:38:18 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i; 

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	int		*len;
	char	*dest;

	if (size == 0)
	{
		return (0);
	}
	i = 0;
	while (strs[i])
	{
		len[i] = ft_strlen(strs[i]);
		dest = malloc(dest + len[i] * sizeof(char));
		i++;
	}
	if (size == 0)
		return (-1);
	i = 0
		while (n > ft_strlen(strs[i]))
		{
			i++;
			n++;

		}
}