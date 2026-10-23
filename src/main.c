#include <stdio.h>
#include <kv.h>

int main() {
	kv_t *table = kv_init(16);
	printf("%p\n", table);
	printf("%ld\n", table->capacity);
	printf("%ld\n", table->count);
	
	kv_put(table, "hehe", "haha");

  for (int i = 0; i < table->capacity; i++) {
    printf("%s: %s\n", table->entries[i].key, table->entries[i].value);
  }

  char *val =  kv_get(table, "hehe");

  printf("The value to key %s is %s\n", "hehe", val);

  return 0;
}

