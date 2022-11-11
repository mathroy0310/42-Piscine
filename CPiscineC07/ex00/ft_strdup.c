/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:03:15 by maroy             #+#    #+#             */
/*   Updated: 2022/10/06 16:35:42 by maroy            ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		ogsize;
	char	*dup;
	char	*dupoffset;
	int		i;

	i = 0;
	ogsize = ft_strlen(src);
	dup = (char *) malloc (sizeof (char) * ogsize + 1);
	if (dup == 0)
		return ((char *) 0);
	dupoffset = dup;
	while (src[i])
	{
		dupoffset[i] = src[i];
		i++;
	}
	*dupoffset = '\0';
	return (dup);
}
