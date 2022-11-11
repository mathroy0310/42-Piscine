/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:52:35 by maroy             #+#    #+#             */
/*   Updated: 2022/09/28 12:23:07 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main()
{	char str[] = "Bf+/}}%-+$(2b/W^n=p8cQn@O0IeUmz0yv._#3muH$";
	printf("%s", ft_strcapitalize(str));

}
