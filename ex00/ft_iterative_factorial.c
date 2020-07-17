/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:09:16 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 07:57:11 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_iterative_factorial(int nb){
	int i;
	int j;
	int Fact;

	i = 0;
	j= nb;
	Fact = 1;

	while(i<j){
		Fact = Fact*(nb-i);
		i++;
	}
return(Fact);
}
