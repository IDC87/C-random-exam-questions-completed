
#include <unistd.h>
//#include <stdio.h>

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					k++;
					break;
				}
				j++;
			}

			i++;
		}
		if (k == i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);

	return (0);

	

}



