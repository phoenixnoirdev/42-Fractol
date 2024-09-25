/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:23:06 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/17 09:02:04 by phkevin          ###   Luxembour.lu      */
/*                                                                            */
/* ************************************************************************** */

#include "src.h" 

static int	g_r(int r)
{
	if (r >= 0 && r <= 255)
		return (255);
	else if (r >= 255 && r <= 510)
		return (255 - (r - 255));
	else if (r >= 510 && r <= 1020)
		return (0);
	else if (r >= 1020 && r <= 1275)
		return (r - 1020);
	else
		return (255);
}

static int	g_g(int g)
{
	if (g >= 0 && g <= 255)
		return (g);
	else if (g >= 255 && g <= 765)
		return (255);
	else if (g >= 765 && g <= 1020)
		return (255 - (g - 765));
	else if (g >= 1020 && g <= 1275)
		return (0);
	else
		return (255);
}

static int	g_b(int b)
{
	if (b >= 0 && b <= 510)
		return (0);
	if (b > 510 && b <= 765)
		return (b - 510);
	else
		return (255);
}

static int	trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int	ft_get_color(t_data *f)
{
	int	i;
	int	r;
	int	g;
	int	b;

	i = 15;
	r = g_r(f->iter * i);
	g = g_g(f->iter * i);
	b = g_b(f->iter * i);
	if (f->colorref == 0)
		return (trgb(0, r, g, b));
	else if (f->colorref == 1)
		return (trgb(0, r + 150, g, b + 10));
	else if (f->colorref == 2)
		return (trgb(0, r + 70, g, b + 70));
	else if (f->colorref == 3)
		return (trgb(0, r, g + 75, b));
	else if (f->colorref == 4)
		return (trgb(0, r, g, b + 140));
	else
		return (trgb(0, r, g, b));
}
