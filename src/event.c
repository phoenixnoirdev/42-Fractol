/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:34:38 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/16 16:45:20 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h" 

int	pr_key(int keysym, t_data *f)
{
	if (keysym == XK_Escape)
		ft_close(f);
	else if (keysym == XK_space)
	{
		if (f->colorref == 4)
			f->colorref = 0;
		else
			f->colorref++;
	}
	else if (keysym == XK_Up)
		ft_move(f, 0.1, 'U');
	else if (keysym == XK_Down)
		ft_move(f, 0.1, 'D');
	else if (keysym == XK_Left)
		ft_move(f, 0.1, 'L');
	else if (keysym == XK_Right)
		ft_move(f, 0.1, 'R');
	else if (keysym == XK_1)
		ft_reinitialisation(f, 'M');
	else if (keysym == XK_2)
		ft_reinitialisation(f, 'J');
	else if (keysym == XK_3)
		ft_reinitialisation(f, 'T');
	ft_render(f);
	return (0);
}

int	mouse_click(int mocde, int x, int y, t_data *f)
{
	if (mocde == LEFT_CLIC && f->type == JULIA)
		julia_influ(x, y, f);
	else if (mocde == RIGHT_CLIC && f->type == JULIA)
		julia_influ(x, y, f);
	else if (mocde == MIDDLE_CLIC)
		ft_reset_pos(f);
	else if (mocde == SCROLL_UP)
		ft_zoom(f, x, y, 0.9);
	else if (mocde == SCROLL_DOWN)
		ft_zoom(f, x, y, 1.1);
	ft_render(f);
	return (0);
}

int	mouse_move(int x, int y, t_data *f)
{
	(void)f;
	(void)x;
	(void)y;
	return (0);
}
