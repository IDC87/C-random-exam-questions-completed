#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *str;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
			if (argv[1][i] != '_')
				j++;
		}

		str = (char *)malloc(sizeof(char) * (i - j + 1));

		i = 0;
		j = 0;
		while(argv[1][i] != '\0')
		{	
			
			if (argv[1][i] == '_')
			{
				str[j] = argv[1][i + 1] - 32;
				i++;			

			}
			else
				str[j] = argv[1][i];
			
			i++;
			j++;
		}


		j = 0;
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}

		free(str);

	}
	return 0;
}