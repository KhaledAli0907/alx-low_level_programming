int main(void)
{
	int i, j, x, y;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			
			for (x = 48; x < 58; x++)
			{
				for (y = 48; y < 58; y++)
				{	
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(x);
						putchar(y);
						if (!(i == '9' && j == '8'))
						{
							putchar(',');
							putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
