/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:31:50 by zm                #+#    #+#             */
/*   Updated: 2024/05/31 21:55:54 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a;
	int b;
	int div;
	int mod;
	a = 20;
	b = 10;
	ft_div_mod(a,b,&div,&mod);
	printf("div = %d and mod = %d" , div, mod);
	return 0;
}*/
