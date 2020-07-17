/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamolomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:48:56 by kamolomo          #+#    #+#             */
/*   Updated: 2020/07/17 09:43:01 by kamolomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int ft_fibonacci(int index){
	
	if (index < 0){
		return -1;
	}
	else if (index <= 3){
		return 1;
	}
	else{
		return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
	}

}

