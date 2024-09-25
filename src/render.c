/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:12:27 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/17 08:59:24 by phkevin          ###   Luxembour.lu      */
/*                                                                            */
/* ************************************************************************** */

#include "src.h" 

void	ft_render(t_data *f)
{
	mlx_clear_window(f->mlx, f->win);
	if (f->type == MANDELBROT)
		render_mendelbrot(f);
	else if (f->type == TRICORN)
		render_tricorn(f);
	else if (f->type == JULIA)
		render_julia(f);
}

void	ft_reset_pos(t_data *f)
{
	if (f->type == MANDELBROT)
		mandel_set_layout(f);
	else if (f->type == TRICORN)
		tricorn_set_layout(f);
	else if (f->type == JULIA)
		julia_set_layout(f);
}

void	ft_zoom(t_data *f, int x, int y, double zoom)
{
	f->centerr = f->minr - f->maxr;
	f->centeri = f->maxi - f->mini;
	f->maxr = f->maxr + (f->centerr - zoom * f->centerr) / 2;
	f->minr = f->maxr + zoom * f->centerr;
	f->mini = f->mini + (f->centeri - zoom * f->centeri) / 2;
	f->maxi = f->mini + zoom * f->centeri;
	x -= WIDTH / 2;
	y -= HEIGHT / 2;
	if (x < 0)
		ft_move(f, (double)x * -1 / WIDTH, 'L');
	else if (x > 0)
		ft_move(f, (double)x / WIDTH, 'R');
	if (y < 0)
		ft_move(f, (double)y * -1 / HEIGHT, 'U');
	else if (y > 0)
		ft_move(f, (double)y / HEIGHT, 'D');
}

void	ft_move(t_data *f, double target, char c)
{
	f->centerr = f->minr - f->maxr;
	f->centeri = f->mini - f->maxi;
	if (c == 'U')
	{
		f->mini -= f->centeri * target;
		f->maxi -= f->centeri * target;
	}
	if (c == 'D')
	{
		f->mini += f->centeri * target;
		f->maxi += f->centeri * target;
	}
	if (c == 'R')
	{
		f->minr -= f->centerr * target;
		f->maxr -= f->centerr * target;
	}
	if (c == 'L')
	{
		f->minr += f->centerr * target;
		f->maxr += f->centerr * target;
	}
}
