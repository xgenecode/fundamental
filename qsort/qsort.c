#include <stdlib.h>
#include <stdio.h>

static int compare_func(const void *x, const void *y)
{
	int a = *(int *)x;
	int b = *(int *)y;

	if (a < b)
		return 1;
	if (a > b)
		return -1;
	return 0;
}

int main (void)
{
	int p[10] = {9, 7, 5, 4, 3, 2, 1, 6, 8, 0};
	int i;

	printf("Before sorting:\n");
	for (i = 0; i < sizeof(p)/sizeof(int); i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	qsort(p, sizeof(p)/sizeof(int), sizeof(int), compare_func);

	printf("After sorting:\n");
	for (i = 0; i < sizeof(p)/sizeof(int); i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
	return 0;
}
