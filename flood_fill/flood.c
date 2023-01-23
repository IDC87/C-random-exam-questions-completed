#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"


// typedef struct  s_point
//   {
//     int           x; 8
//     int           y; 5
//   }               t_point;


void search_tiles(char **tab, int x, int y, t_point size)
{
	int i = 0;

	if (x >= size.x || y >= size.y || x < 0 || y < 0)
		return ;
	if (tab[y][x] != '1')
		return ;
	tab[y][x] = 'F';

	search_tiles(tab, x + 1, y, size);
	search_tiles(tab, x - 1, y, size);
	search_tiles(tab, x, y + 1, size);
	search_tiles(tab, x, y - 1, size);
}



void flood_fill(char **tab, t_point size, t_point begin)
{
	//tab[begin.y][begin.x] = 'F';
	search_tiles(tab, begin.x, begin.y, size);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {0, 0};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
