
#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int j = 1;
	int k = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (argc == 2)
	{
		while(argv[1][i])
		{
			j = 1;
			k = 0;
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				while(argv[1][i] != str[k])
				{
					j++;
					k++;
				}

				while(j > 0)
				{
				 	write(1, &argv[1][i], 1);
				 	j--;
				}

			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while(argv[1][i] != str2[k])
				{
					j++;
					k++;
				}

				while(j > 0)
				{
				 	write(1, &argv[1][i], 1);
				 	j--;
				}
			}			
			else
				write(1, &argv[1][i], 1);

			i++;

		}


	}
	write(1, "\n", 1);
}