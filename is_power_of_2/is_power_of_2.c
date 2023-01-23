#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	int num;

	num = n;
	if (num < 1 )
		return 0;
	if (num == 1)
		return 1;
	while (num > 1)
	{
		if (num % 2 != 0)
			return 0;			
		num = num / 2;	
		
	}
	return 1;
	


}

// int main(void)
// {
// 	printf("%d\n", is_power_of_2(12));
	
// }