
//#include <stdio.h>
#include <stdlib.h>


int *ft_rrange(int start, int end)
{
	int size = 0;
	int i = 0;
	int *arr;

	size = end - start;
	if (size < 0)
		size = size * (-1);

	//printf("size is %d\n", size);

	arr = (int *)malloc(sizeof(int) * (size + 1));

	while (i < size + 1)
	{
		if (end < 0)
			arr[i] = end - (i * (-1));
		else
			arr[i] = end - i;
		i++;
		
	}

	// i = 0;
	// while (i < size + 1)
	// {
	// 	printf("%d\n", arr[i]);
	// 	i++;
	// }



	return(arr);


}


// int main(int argc, char **argv)
// {
// 	ft_rrange(0, -3);
// 	int i = 0;

	

// 	return 0;
// }