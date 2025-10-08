#include "flood_fill.h"


void    fill(char **tab, t_point size, int x, int y, char target)
{
    
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target;

    target = tab[begin.x][begin.y];
    if (target == "F")
        return;
    fill(tab, size, begin.x, begin.y, target);
}
