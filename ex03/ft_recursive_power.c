/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:37:04 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 10:46:17 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return 0;
	}
	else if (power == 0)
	{
		return 1;
	}
	else if (power > 0)
	{
		nb = nb*ft_recursive_power(nb, power-1);
	}
		return(nb);
}
