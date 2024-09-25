/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:19:40 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/13 17:12:23 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h" 

void	ft_pixel_put(t_data *f, int x, int y, int color)
{
	char	*dst;

	dst = f->addr + (y * f->line_len + x * (f->bpp / 8));
	*(unsigned int *) dst = color;
}
