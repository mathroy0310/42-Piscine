/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:00:22 by maroy             #+#    #+#             */
/*   Updated: 2022/10/06 15:45:48 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	nb = nb * ft_recursive_power(r, power - 1);
	return (nb);
}
