/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:27:59 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 13:31:16 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb)
{
	int i;
	int check;
	int is_prime;
	int next;
	int found;


	found = 0;
//	i = nb;
	is_prime = 0;
	next = nb+1;

	while (found == 0)
	{
		check = 0;
		i=2;
		while( i <= (next/2))
		{
			check = next % i;
			if (check == 0)
			{
				is_prime++;
			}
		i++;
		}

		if (is_prime == 0)
		{
			found = 1;
		}
	next++;
	}
return next;
}


int ft_is_prime (int nb){
	int i;
	int check;
	int is_prime;

	is_prime = 0;

	if (nb <=  3)
	{
		return 3;
	}
	else if (nb > 3)
	{
		i = 3;
		check = 0;

		while (i <= (nb/2) )
		{
			check = nb % i;
			if (check == 0)
			{
				is_prime++;
			}
		i++;
		}

		if (is_prime == 0)
		{
			return nb;
		}
		else
		{
			ft_find_next_prime(nb);
		}
	}

}

int main()

{
	printf("%d", ft_is_prime(8));
}
