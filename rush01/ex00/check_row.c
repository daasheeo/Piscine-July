int	check_row(char **m, int row, int col, char c)
{
	int cont_c;
	int check;

	check = 0;
	cont_c = 0;
	while (cont_c < col)
	{
		if (m[row][cont_c] == c)
		{
			check = 1;
		}
		cont_c++;
	}
	return (check);
}