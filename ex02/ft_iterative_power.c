/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:27:15 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 08:06:10 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int ft_iterative_power(int nb, int power){
	
	if (nb > 0){
		int i;
		int ans;

		i=1;
		ans = nb;
		while(i<=power){
			ans = nb*nb;
			i++;
	}
		return(ans);
	}
	else{
		return(0);
	};
}
