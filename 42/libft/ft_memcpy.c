/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:54 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/06 18:22:07 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	x = 0;
	if (!dest && !src)
		return (dest);
	while (n > x)
	{
		ptrd[x] = ptrs[x];
		x++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Defina uma string de origem
    char origem[] = "Hello, World!";
    // Defina um array de destino com espaço suficiente para a string de origem
    char destino[20];

    // Use my_memcpy para copiar a string de origem para o destino
    ft_memcpy(destino, origem, strlen(origem) + 1);

    // Imprima a string de origem e a string de destino para verificar a cópia
    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);

    return 0;
}*/