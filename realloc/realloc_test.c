#include <stdlib.h>
#include <stdio.h>

int main (void) {
	int *p, *new_p;
	int c, count = 10;
	int i;

	p = malloc(sizeof(int));
	p[0] = 1;
	for (c = 2; c < count; c++) {
		new_p = realloc(p, c*sizeof(int));
		if (new_p) {
			printf("reallocated sz %d!\n", c);
			p = new_p;
		}
		p[c-1] = c;
	}
	for (i = 0; i < count; i++) {
		printf("p[%d] %d\n", i, p[i]);
	}
	return 0;
}
