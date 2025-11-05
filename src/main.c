/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stefuntu <stefuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:27:15 by mmisumi           #+#    #+#             */
/*   Updated: 2025/11/05 13:10:39 by stefuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int get_map(t_map *map) {
	(void)map;

	return (1);
}

int main(int argc, char *argv[])
{
	t_map map;

	if (argc != 2)
		return (1);
	if (get_map(&map) == -1)
		return (1);

	return (0);
}
