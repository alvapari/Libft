/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmovepruebita.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:59:21 by alvapari          #+#    #+#             */
/*   Updated: 2023/08/27 14:28:24 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	*paco;

	paco = calloc(3, sizeof(int));
	printf("%lu\n", sizeof(paco));
	printf("%lu", sizeof(*(paco+4)));
}

