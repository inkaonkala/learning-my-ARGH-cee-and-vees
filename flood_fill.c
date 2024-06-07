typedef struct  s_point
{
	int           x;
	int           y;
}               t_point;


void	doit(char **tab, t_point size, t_point current, char filler)
{
	if (current.y < 0 || current.y >= size.y || current.x < 0 || current.x >= size.x || tab[current.y][current.x] != filler)
		return ;
	tab[current.y][current.x] = 'F';
	doit(tab, size, (t_point){current.x - 1, current.y}, filler);
	doit(tab, size, (t_point){current.x + 1, current.y}, filler);
	doit(tab, size, (t_point){current.x, current.y - 1}, filler);
	doit(tab, size, (t_point){current.x, current.y + 1}, filler);
				}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    doit(tab, size, begin, tab[begin.y][begin.x]);
}
