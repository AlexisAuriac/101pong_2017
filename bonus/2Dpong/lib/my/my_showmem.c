/*
** EPITECH PROJECT, 2017
** my_showmem
** File description:
** Prints a memory dump and return 0.
*/

void put_strpart(char *str, int start, int finish)
{
	for (int i = start ; str[i] != '\0' && i < finish ; i++) {
		my_putchar(str[i]);
	}
}

void incr10_str(char *str)
{
	for (int i = 6 ; i >= 0 ; i--) {
		if (str[i] != '9') {
			str[i]++;
			i = 0;
		} else
			str[i] = '0';
	}
}

void my_putrevstr(char const *str)
{
	int len = my_strlen(str);

	for (int i = len - 1 ; i >= 0 ; i--)
		my_putchar(str[i]);
}

int my_print_hexa(int c)
{
	char result[50];
	char base[] = "0123456789abcdef";
	int base_len = 16;
	int i = 0;

	if (c < 16)
		my_putchar('0');
	while (c != 0) {
		result[i] = base[c % base_len];
		result[i + 1] = '\0';
		c = c / base_len;
		i++;
	}
	my_putrevstr(result);
	return (1);
}

void putstr_part_hexa(char const *str, int start, int finish)
{
	char space = 'F';
	char end_reached = 'F';

	for (int i = start ; i < finish != '\0' ; i++) {
		if (end_reached == 'T' || str[i] == '\0') {
			end_reached = 'F';
			my_putchar(' ');
			my_putchar(' ');
		} else
			my_print_hexa(str[i]);
		if (space == 'T') {
			my_putchar(' ');
			space = 'F';
		} else
			space = 'T';
	}
}

void putstr_part(char const *str, int start, int finish)
{
	for (int i = start ; i < finish && str[i] != '\0' ; i++) {
		if (str[i] < ' ')
			my_putchar('.');
		else
			my_putchar(str[i]);
	}
}

int my_showmem(char const *str, int size)
{
	char hexaddress[] = "00000000:  ";
	int lines = size / 16;

	if (size % 16 != 0)
	  lines++;
	for (int i = 0 ; i < lines ; i++) {
		my_putstr(hexaddress);
		incr10_str(hexaddress);
		putstr_part_hexa(str, i * 16, (i + 1) * 16);
		putstr_part(str, i * 16, (i + 1) * 16);
		my_putchar('\n');
	}
}
