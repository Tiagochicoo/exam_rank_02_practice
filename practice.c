/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:02:02 by root              #+#    #+#             */
/*   Updated: 2022/06/09 14:47:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>

void	get_random(char **exercises)
{
	char 	*e;
	char	*line;
	int 	random;
	int		fd;
	srand(time(NULL));

	random = rand() % 10;
	if (random < 2)
		random = 2;
	e = exercises[random];
	fd = open(e, O_RDONLY, 0);
	if (fd > 0)
	{
		fputs("\033c", stdout);
		while (get_next_line(fd, &line))
			printf("%s\n", line);
	}
}

void	level_00(void)
{
	char	**exercises;
	int		i;
	DIR 	*d;
	struct 	dirent *dir;

	i = 0;
	exercises = malloc(10000);
	d = opendir("./level_00/");
	if (d)
	{
		while ((dir = readdir(d)) != NULL && i < 11)
		{
			exercises[i] = (char *)malloc(sizeof(dir->d_name) + 11);  
			exercises[i] = ft_strjoin("./level_00/", dir->d_name);
			i++;
		}
    	closedir(d);
	}
	get_random(exercises);
}

void	level_01(void)
{
	char	**exercises;
	int		i;
	DIR 	*d;
	struct 	dirent *dir;

	i = 0;
	exercises = malloc(10000);
	d = opendir("./level_01/");
	if (d)
	{
		while ((dir = readdir(d)) != NULL && i < 11)
		{
			exercises[i] = (char *)malloc(sizeof(dir->d_name) + 11);  
			exercises[i] = ft_strjoin("./level_01/", dir->d_name);
			i++;
		}
    	closedir(d);
	}
	get_random(exercises);
}

void	level_02(void)
{
	char	**exercises;
	int		i;
	DIR 	*d;
	struct 	dirent *dir;

	i = 0;
	exercises = malloc(10000);
	d = opendir("./level_02/");
	if (d)
	{
		while ((dir = readdir(d)) != NULL && i < 11)
		{
			exercises[i] = (char *)malloc(sizeof(dir->d_name) + 11);  
			exercises[i] = ft_strjoin("./level_02/", dir->d_name);
			i++;
		}
    	closedir(d);
	}
	get_random(exercises);
}

void	level_03(void)
{
	char	**exercises;
	int		i;
	DIR 	*d;
	struct 	dirent *dir;

	i = 0;
	exercises = malloc(10000);
	d = opendir("./level_03/");
	if (d)
	{
		while ((dir = readdir(d)) != NULL && i < 11)
		{
			exercises[i] = (char *)malloc(sizeof(dir->d_name) + 11);  
			exercises[i] = ft_strjoin("./level_03/", dir->d_name);
			i++;
		}
    	closedir(d);
	}
	get_random(exercises);
}

void	level_04(void)
{
	char	**exercises;
	int		i;
	DIR 	*d;
	struct 	dirent *dir;

	i = 0;
	exercises = malloc(10000);
	d = opendir("./level_04/");
	if (d)
	{
		while ((dir = readdir(d)) != NULL && i < 11)
		{
			exercises[i] = (char *)malloc(sizeof(dir->d_name) + 11);  
			exercises[i] = ft_strjoin("./level_04/", dir->d_name);
			i++;
		}
    	closedir(d);
	}
	get_random(exercises);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1][0] == '0')
			level_00();
		else if (argv[1][0] == '1')
			level_01();
		else if (argv[1][0] == '2')
			level_02();
		else if (argv[1][0] == '3')
			level_03();
		else if (argv[1][0] == '4')
			level_04();
		else
			printf("Usage: ./practice <level> | ./practice 3\n");
	}
	else
		printf("Usage: ./practice <level> | ./practice 3\n");
	return (0);
}
