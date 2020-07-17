/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:57:23 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 11:18:09 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
	int i;
	int check;//remainder check
	int is_prime; //factor counter

	is_prime = 0;

	if (nb<2)
	{
		return 0;
	}
	else if (nb == 2 )
	{
		return 1;	
	}
	else
	{
		i=2;
		check = 0;
		while (i <= (nb/2))
		{
			check = nb % i;
			if (check == 0)
			{
				is_prime++;
			}
		i++;		
		}
	
		if (is_prime ==	0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
//	i++;	
	}
}	
