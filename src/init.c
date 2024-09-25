/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 23:42:23 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/16 16:43:24 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

static void	reset_data(t_data *f)
{
	f->type = 0;
	f->iter = 0;
	f->centerr = 0;
	f->centeri = 0;
	f->minr = 0;
	f->maxr = 0;
	f->mini = 0;
	f->maxi = 0;
	f->juliasx = 0;
	f->juliasy = 0;
	f->colorref = 0;
}

void	ft_initialisation(t_data *f, char **c, int argc)
{
	reset_data(f);
	if (c[1][0] == MANDELBROT && argc == 2)
	{
		f->type = MANDELBROT;
		mandel_set_layout(f);
	}
	else if (c[1][0] == TRICORN && argc == 2)
	{
		f->type = TRICORN;
		tricorn_set_layout(f);
	}
	else if (c[1][0] == JULIA && argc == 4)
	{
		f->type = JULIA;
		if ((ft_atoi(c[3]) > HEIGHT || ft_atoi(c[2]) > WIDTH)
			|| ft_atoi(c[3]) < 0 || ft_atoi(c[2]) < 0)
		{
			ft_help();
		}
		julia_set_layout(f);
		julia_influ(ft_atoi(c[2]), ft_atoi(c[3]), f);
	}
	else
		ft_help();
}

void	ft_reinitialisation(t_data *f, char c)
{
	reset_data(f);
	if (c == MANDELBROT)
	{
		f->type = MANDELBROT;
		mandel_set_layout(f);
	}
	else if (c == TRICORN)
	{
		f->type = TRICORN;
		tricorn_set_layout(f);
	}
	else if (c == JULIA)
	{
		f->type = JULIA;
		julia_set_layout(f);
		julia_influ(f->juliasx, f->juliasy, f);
	}
	else
		ft_help();
}

void	ft_init(t_data *f)
{
	f->mlx = mlx_init();
	f->win = mlx_new_window(f->mlx, WIDTH, HEIGHT, TITLE);
	f->img = mlx_new_image(f->mlx, WIDTH, HEIGHT);
	f->addr = mlx_get_data_addr(f->img, &f->bpp, &f->line_len, &f->endian);
	ft_render(f);
}
