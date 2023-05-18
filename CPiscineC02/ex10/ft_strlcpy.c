/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:45:31 by maroy             #+#    #+#             */
/*   Updated: 2023/05/18 17:02:06 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (i + 1 < n)
	{
		while (j < i + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (n > 0)
	{
		while (j < n - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = 0;
	}
	return (i);
}