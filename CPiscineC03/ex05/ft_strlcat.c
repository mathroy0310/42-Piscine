/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:10:42 by maroy             #+#    #+#             */
/*   Updated: 2023/05/18 23:10:51 by maroy            ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (dest[len] && len < size)
		len++;
	while (src[i] && size && len + i < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (len < size)
		dest[len + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (len + i);
}