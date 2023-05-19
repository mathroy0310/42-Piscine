/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:03:15 by maroy             #+#    #+#             */
/*   Updated: 2023/05/18 22:48:43 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chr_is_printable(char chr)
{
	if (chr < ' ' || chr == 127)
		return (0);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char n)
{
	if (n > 9)
	{
		if (n < 16)
			ft_putchar(n + 87);
		else
		{
			ft_puthex(n / 16);
			ft_puthex(n % 16);
		}
	}
	else
		ft_putchar(n + 48);
}

// void	ft_puthex(char n)
// {
// 	char			*base;
// 	unsigned char	c;

// 	c = (unsigned char)n;
// 	base = "0123456789abcdef";
// 	ft_putchar('\\');
// 	ft_putchar(base[c / 16]);
// 	ft_putchar(base[c % 16]);
// }

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_chr_is_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_puthex(str[i]);
		i++;
	}
}