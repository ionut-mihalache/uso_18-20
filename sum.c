#include <stdio.h>

int main()
{
	int v[100] = {6, 7, 1, 0, 10, -2, 6};
	int i;
	int n = sizeof(v) / sizeof(v[0]);
	int s = 0;

	for (i = 0; i < n; ++i)
		s += v[i];

	printf("Sum is: %d.\n", s);

	return 0;
}
