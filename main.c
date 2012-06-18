#include <stdio.h>

void memcpy_test() {
	char *src_p = "source";
	char *dest_p = malloc(11);
	memcpy(dest_p, src_p, strlen(src_p));
	puts(dest_p);
}

int main(void) {
	memcpy_test();
	return 0;
}
