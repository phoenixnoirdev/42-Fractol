/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:09:58 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/17 09:15:36 by phkevin          ###   Luxembour.lu      */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

static void	ft_type(void)
{
	ft_printf("%s============%s TYPE %s============\n", YELLOW, GREEN, YELLOW);
	ft_printf("%s", NOCOLORS);
	ft_printf("%c - Mandelbrot\n", MANDELBROT);
	ft_printf("%c - Julia\n", JULIA);
	ft_printf("%c - Tricorn\n", TRICORN);
	ft_printf("%sUsage exemple basic:\n", CYAN);
	ft_printf("%s./fractol <M / T>%s\n", CYAN, NOCOLORS);
	ft_printf("%sUsage exemple Julia:\n", CYAN);
	ft_printf("%s./fractol <J> <X> <Y>%s\n", CYAN, NOCOLORS);
}

static void	ft_ctrl(void)
{
	ft_printf("%s============%s CTRL %s============\n", YELLOW, GREEN, YELLOW);
	ft_printf("%s", NOCOLORS);
	ft_printf("- Space: Change the color palette.\n");
	ft_printf("- Numeric cente: Change the fractal type.\n");
	ft_printf("- Up/Down/Left/Right: Move .\n");
	ft_printf("- Scroll up/down: Zoom .\n");
	ft_printf("- clic middle: Reset Zoom .\n");
	ft_printf("- clic Left/Right: Influence the form Julia.\n");
}

void	ft_help(void)
{
	ft_printf("%s/*******************************************\\\n", YELLOW);
	ft_printf("%s                %s HELP                \n", GREEN, TITLE);
	ft_printf("%s\\*******************************************/\n", YELLOW);
	ft_printf("%s", NOCOLORS);
	ft_type();
	ft_ctrl();
	exit (0);
}
