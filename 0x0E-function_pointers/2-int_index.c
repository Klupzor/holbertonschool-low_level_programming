/**
 * int_index - prints position when its true.
 * @array: arrat to print
 * @size: size of array.
 * @cmp: fuction that compare.
 *
 * Return: position.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
