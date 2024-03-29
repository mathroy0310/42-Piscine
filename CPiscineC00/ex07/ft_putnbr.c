/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:56:49 by maroy             #+#    #+#             */
/*   Updated: 2023/05/18 16:17:45 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		nbr = -nb;
		write(1, "-", 1);
	}
	else
		nbr = nb;
	if (nb / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
