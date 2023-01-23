

#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
	int i = 2;

	if (num == 1)
		return 0;
	if (num == 2)
		return 1;

	while (i < num)
	{
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void fprime(int num)
{
	int i = 2;
	int n;
	
	n = num;
	while (1)
	{
		
		while (n % i == 0)
		{
			n = n / i;
			printf("%d", i);
			if (n == 1)
				return ;
			printf("*");								
		}	
		i++;

	}
}


int main(int argc, char **argv)
{
		

	if (argc == 2)
	{
		int num = atoi(argv[1]);
		if (num == 1)
		{
			printf("%d\n", num);
			return 0;
		}
		if (is_prime(num))
		{
			printf("%d\n", num);
			return 0;
		}
		fprime(num);
			

	}
	printf("\n");


}