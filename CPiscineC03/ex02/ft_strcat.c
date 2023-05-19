/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:05:38 by maroy             #+#    #+#             */
/*   Updated: 2023/05/18 23:06:29 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

    	i = 0;
	while (dest[i])
		i++;
	destlen = i;
	i = 0;
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}