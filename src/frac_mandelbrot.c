/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frac_mandelbrot.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:30:18 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/16 16:09:29 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

void	mandel_set_layout(t_data *f)
{
	f->minr = -2.0;
	f->maxr = 2.0;
	f->mini = -1.2;
	f->maxi = f->mini + (f->maxr - f->minr) * HEIGHT / WIDTH;
}

static int	is_inside(double cr, double ci, t_data *f)
{
	double	zr;
	double	zi;
	double	tmp;
	int		i;

	i = 0;
	zr = 0;
	zi = 0;
	while (i < MAX_ITER)
	{
		if ((zr * zr + zi * zi) > 4.0)
		{
			f->iter = i;
			return (0);
		}
		tmp = 2 * zr * zi + ci;
		zr = zr * zr - zi * zi + cr;
		zi = tmp;
		i++;
	}
	f->iter = i;
	return (1);
}

void	render_mendelbrot(t_data *f)
{
	int		x;
	int		y;
	double	pr;
	double	pi;

	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WIDTH)
		{
			pr = f->minr + ((double)x * (f->maxr - f->minr) / WIDTH);
			pi = f->maxi + ((double)y * (f->mini - f->maxi) / HEIGHT);
			if (is_inside(pr, pi, f) == 0)
				ft_pixel_put(f, x, y, ft_get_color(f));
			else
				ft_pixel_put(f, x, y, BLACK);
		}
	}
	mlx_put_image_to_window(f->mlx, f->win, f->img, 0, 0);
}
