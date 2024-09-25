/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frac_julia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:18:04 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/16 16:09:34 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

void	julia_set_layout(t_data *f)
{
	f->minr = -2.0;
	f->maxr = 2.0;
	f->mini = -1.2;
	f->maxi = f->mini + (f->maxr - f->minr) * HEIGHT / WIDTH;
}

void	julia_influ(int x, int y, t_data *f)
{
	f->juliasx = f->minr + (double)x * (f->maxr - f->minr) / WIDTH;
	f->juliasy = f->maxi + (double)y * (f->mini - f->maxi) / HEIGHT;
}

static int	is_inside(double zr, double zi, t_data *f)
{
	double	tmp;
	int		i;

	i = 0;
	while (i <= MAX_ITER)
	{
		if ((zr * zr + zi * zi) > 4.0)
		{
			f->iter = i;
			return (0);
		}
		tmp = zr * zr - zi * zi;
		zi = 2 * zr * zi + f->juliasy;
		zr = tmp + f->juliasx;
		i++;
	}
	f->iter = i;
	return (1);
}

void	render_julia(t_data *f)
{
	int		x;
	int		y;
	double	pr;
	double	pi;

	y = -1;
	while (y++ <= HEIGHT)
	{
		x = -1;
		while (x++ <= WIDTH)
		{
			pi = f->maxi + ((double) y * (f->mini - f->maxi) / HEIGHT);
			pr = f->minr + ((double) x * (f->maxr - f->minr) / WIDTH);
			if (is_inside(pr, pi, f) == 0)
				ft_pixel_put(f, x, y, ft_get_color(f));
			else
				ft_pixel_put(f, x, y, BLACK);
		}
	}
	mlx_put_image_to_window(f->mlx, f->win, f->img, 0, 0);
}
