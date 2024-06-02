/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 22:26:18 by zm                #+#    #+#             */
/*   Updated: 2024/06/02 22:50:06 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap1;
	int	swap2;

	swap1 = *a / *b;
	swap2 = *a % *b;
	*a = swap1;
	*b = swap2;
}
/*int main()
{
	int a;
	int b;
	a = 42;
	b = 25;
	ft_ultimate_div_mod(&a,&b);
	printf("%d , %d", a , b);
	return 0;
}*/
