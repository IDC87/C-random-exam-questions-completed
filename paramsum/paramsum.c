
#include <unistd.h>

void putnbr(int n)
{
	char digit;

	if (n >= 10)
		putnbr(n / 10);

	digit = (n % 10) + 48;
	write(1, &digit, 1);

	
}

int main (int argc, char **argv)
{
	
	if (argc >1)
	putnbr(argc - 1);
	else
	write(1, "0", 1);	
	write(1, "\n", 1);

	
}