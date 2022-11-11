/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:17:21 by maroy             #+#    #+#             */
/*   Updated: 2022/09/28 11:45:15 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(int argc , char **argv)
{
	printf("%d",ft_str_is_alpha("abcedeggidhi"));
	printf("%d",ft_str_is_alpha("123141:<>'::249"));
	printf("%d",ft_str_is_alpha("asnbd*!#@(#!*("));
							
}
