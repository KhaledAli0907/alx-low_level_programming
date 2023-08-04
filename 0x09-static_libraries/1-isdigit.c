/**
* _isdigit - check if the input is digit or not
*
* @c : Integer
*
* Return: 1 if the input is digit, 0 otherwise
*/

int _isdigit(int c)
{
	int i;

	/* loop the alphabet */
	for (i = 48; i <= 57; i++)
		if (i == c)
			return (1);

	return (0);
}
