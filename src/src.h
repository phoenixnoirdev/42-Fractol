/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:17:18 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/17 09:09:48 by phkevin          ###   Luxembour.lu      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_H
# define SRC_H

# include "../lib/libft/libft.h"
# include "../lib/ftprintf/libftprintf.h"
# include "../lib/getnextline/libgetnextline.h"
# include "../lib/minilibx/mlx.h"
# include <X11/keysym.h>
# include <math.h>

/* Project name */
# define TITLE "FRACTOL"

/* Windows size */
# define WIDTH 1920 //1920
# define HEIGHT 1080 //1080

/* Mouse */
# define LEFT_CLIC 1
# define MIDDLE_CLIC 2
# define RIGHT_CLIC 3
# define SCROLL_UP 4
# define SCROLL_DOWN 5

/* Color MSG*/
# define NOCOLORS "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

/* TYPE */
# define MANDELBROT 77
# define JULIA 74
# define TRICORN 84

/*MAX ITER*/
# define MAX_ITER 42

/*BLACK*/
# define BLACK 0x00000000

/* DATA */
typedef struct s_data
{
	void	*img;
	void	*mlx;
	void	*win;
	char	*addr;
	int		type;
	int		bpp;
	int		line_len;
	int		endian;
	int		iter;
	double	centerr;
	double	centeri;
	double	minr;
	double	maxr;
	double	mini;
	double	maxi;
	double	juliasx;
	double	juliasy;
	int		colorref;
}				t_data;

/*
 *	Fonction print pixel
 */
void	ft_pixel_put(t_data *f, int x, int y, int color);

/*
 *	Fonction print forme (square)
 */
void	ft_put_square(t_data f, int size, int coox, int cooy);
void	ft_put_wframsquare(t_data f, int size, int coox, int cooy);
void	ft_put_somsquare(t_data f, int s, int coox, int cooy);

/*
 *	Fonction print forme (circle)
 */
void	ft_put_circle(t_data f, int ray, int centx, int centy);
void	ft_put_wframcircle(t_data f, int ray, int centx, int centy);
void	ft_put_centcircle(t_data f, int centx, int centy);

/*
 *	Fonction code colors
 */
int		ft_get_color(t_data *f);

/*
 *	Fonction event
 */
int		pr_key(int keysym, t_data *f);
int		mouse_click(int mocde, int x, int y, t_data *f);
int		mouse_move(int x, int y, t_data *f);

/*
 *	Fonction close app
 */
int		ft_close(t_data *img);

/*
 *	Fonction close app
 */
void	ft_help(void);

/*
 * Fonction init
 */
void	ft_init(t_data *f);
void	ft_initialisation(t_data *f, char **c, int argc);
void	ft_reinitialisation(t_data *f, char c);

/*
 * Fractal render
 */
void	ft_render(t_data *f);
void	ft_reset_pos(t_data *f);
void	ft_zoom(t_data *f, int x, int y, double zoom);
void	ft_move(t_data *f, double target, char c);

/*
 * Fractal mandelbrot
 */
void	render_mendelbrot(t_data *f);
void	mandel_set_layout(t_data *f);

/*
 * Fractal julia
 */
void	render_julia(t_data *f);
void	julia_set_layout(t_data *f);
void	julia_influ(int x, int y, t_data *f);

/*
 * Fractal tricorn
 */
void	render_tricorn(t_data *f);
void	tricorn_set_layout(t_data *f);

#endif
