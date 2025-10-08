#include "flood_fill.h"

void    fill(char **area, t_point size, int x, int y, char target)
{
    if (x < 0 || y < 0 || x >= size.x || y >= size.y)
        return;
    if (area[x][y] != target)
        return;
    area[x][y] = 'F';
    fill(area, size, x + 1, y, target);
    fill(area, size, x - 1, y, target);
    fill(area, size, x, y + 1, target);
    fill(area, size, x, y - 1, target);
}

void    flood_fill(char **area, t_point size, t_point begin)
{
    char target;

    target = area[begin.x][begin.y];
    if (target == 'F')
        return;
    fill(area, size, begin.x, begin.y, target);
}