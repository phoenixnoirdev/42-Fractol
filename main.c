/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phkevin <phkevin@42luxembourg.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:30:28 by phkevin           #+#    #+#             */
/*   Updated: 2024/06/16 16:36:24 by phkevin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/src.h"

static int	arg_cont(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_data	f;
	int		i;

	i = 2;
	if (argc == 2)
		ft_initialisation(&f, argv, argc);
	else if (argc == 4)
	{
		while (i <= 3)
		{
			if (arg_cont(argv[i]) == 1)
				ft_help();
			i++;
		}
		ft_initialisation(&f, argv, argc);
	}
	else
		ft_help();
	ft_init(&f);
	mlx_hook(f.win, 17, 0, &ft_close, &f);
	mlx_key_hook(f.win, &pr_key, &f);
	mlx_mouse_hook(f.win, &mouse_click, &f);
	mlx_hook(f.win, 6, 1L << 6, &mouse_move, &f);
	mlx_loop(f.mlx);
	return (0);
}
