#include <stdlib.h>
//#include <stdio.h>

char *ft_itoa(int nbr)
{
	int i = 0;
	int size = 0;
	int num;
	char *str;
	int signal = 0;
	

	if (nbr < 0)
	{
		nbr = nbr * (-1);
		signal = 1;
	}
	num = nbr;
	while (num > 0)
	{
		num = num / 10;		
		size++;
		
	}
	str = (char *)malloc(sizeof(char) * (size + signal + 1));
	if (nbr == 0)
	{
		str[0] = '0';
		return str;
	}

	

	
	if (signal)
			str[0] = '-';
	i = 0;
	while (i < size )
	{

		str[size - i - 1 + signal] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
		
	}
	str[size + signal] = '\0';

	return (str);
}

// int main(int argc, char **argv)
// {
// 	printf("%s\n",ft_itoa(0));
// }