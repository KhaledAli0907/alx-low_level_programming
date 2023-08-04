/**
* _isupper - check if a char is upper or lower case
*
* @c : ASCII value for a charechter
*
* Return: 1 if the charachter is upper case, 0 otherwise
*/

int _isupper(int c)
{
	int i;

	/* loop the alphabet */
	for (i = 65; i <= 90; i++)
		if (i == c)
			return (1);

	return (0);
}
