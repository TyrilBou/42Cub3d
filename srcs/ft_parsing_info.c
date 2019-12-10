/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:41:47 by jereligi          #+#    #+#             */
/*   Updated: 2019/12/10 14:45:39 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_check_extension(char *s)
{
	int		i;
	int		n;
	char	*cub;

	i = 0;
	cub = ".cub";
	while (s[i])
	{
		n = 0;
		while (s[i + n] == cub[n] && cub[n])
		{
			if (s[i + n + 1] == '\0' && cub[n + 1] == '\0')
				return (1);
			n++;
		}
		i++;
	}
	return (0);
}

int		ft_parsing_info(char *s, t_info *info_map)
{
	printf("|%s| : ", s);
	if (s[0] == 'R')
		ft_get_resolution(s, info_map);
	else if (s[0] == 'N' && s[1] == 'O')
		printf("OK\n");
	else if (s[0] == 'S' && s[1] == 'O')
		printf("OK\n");
	else if (s[0] == 'W' && s[1] == 'E')
		printf("OK\n");
	else if (s[0] == 'E' && s[1] == 'A')
		printf("OK\n");
	else if (s[0] == 'S' && s[1] == ' ')
		printf("OK\n");
	else if (s[0] == 'F')
		printf("OK\n");
	else if (s[0] == 'C')
		printf("OK\n");
	else if (s[0] == '\n' || s[0] == '\0')
		printf("vide\n");
	else
	{
		ft_error(3);
		return (0);
	}
	return (1);
}
