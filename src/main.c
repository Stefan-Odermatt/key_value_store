#include <stdio.h>
#include <kv.h>

int main() {
	kv_t *table = kv_init(16);
	printf("%p\n", table);
	printf("%ld\n", table->capacity);
	printf("%ld\n", table->count);
	
	kv_put(table, "hehe", "haha");
	kv_put(table, "hehe", "hoho");
	kv_put(table, "nono", "yesyes");

  for (int i = 0; i < table->capacity; i++) {
    printf("%s: %s\n", table->entries[i].key, table->entries[i].value);
  }


  char *val =  kv_get(table, "hehe");
  char *val2 = kv_get(table, "nono"); 
  char *val3 = kv_get(table, "does not exist");

  printf("%s %s %s\n", val, val2, val3);

  kv_delete(table, "hehe");

  val = NULL;
  val = kv_get(table, "hehe");

  printf("%s %s %s\n", val, val2, val3);

  kv_free(table);

  table = NULL;

  val = kv_get(table, "hehe");

  printf("%s\n", val);

  return 0;
}

