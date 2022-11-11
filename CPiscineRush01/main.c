/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:11:31 by maroy             #+#    #+#             */
/*   Updated: 2022/09/25 15:19:39 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include"rush.h"


void ft_error_message(void)
{
	ft_putstr("Erreur\n");
}
int main(int argc, char **argv)
{
	char	**tab;
	int	size;
	
	size = ft_strlen(argv[1]);

	if(argc != 2)
		ft_error_message();
	else if((tab = ft_create_tab(argv[1], size)))
	{
		//debug
		printf("DB: Dans la boucle\n");
	}	
	//debug
	printf("Size du argv[1]: %d\n", size);
}
