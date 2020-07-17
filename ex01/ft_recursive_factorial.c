/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:20:51 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 10:15:20 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_recursive_factorial(int nb){	
	if (nb>1){
	return nb*ft_recursive_factorial(nb-1);
	}
	else{
	return 0;
	}
}
