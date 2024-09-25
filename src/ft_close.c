/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:51:55 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/12 00:13:37 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	ft_close(t_data *f)
{
	if (f->img)
		mlx_destroy_image (f->mlx, f->img);
	if (f->win && f->mlx)
		mlx_destroy_window(f->mlx, f->win);
	if (f->mlx)
	{
		mlx_loop_end(f->mlx);
		mlx_destroy_display(f->mlx);
		free(f->mlx);
	}
	exit (0);
}
