/*
** EPITECH PROJECT, 2017
** my_error.c
** File description:
** Gestion d'erreur
*/

int my_paramerror(int ac, char **str)
{
	int j = 0;

	if (ac != 8)
		return (84);
	while (str[7][j] != '\0') {
		if (str[7][j] == '.' && str[7][j] == '-')
			return (84);
		j = j + 1;
	}
	return (0);
}
