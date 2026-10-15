#include <stdio.h>
#include <kv.h>

int main() {
	kv_t *table = kv_init(16);
	printf("%p\n", table);
	printf("%ld\n", table->capacity);
	printf("%ld\n", table->count);
	
	return 0;
}

