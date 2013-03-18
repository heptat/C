#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <pair.h>
#include <connection.h>

static void test_create_pair(void) {
  Pair *pair = create_pair(1, 2);

  assert (1 == pair->first && "pair->first should be 1");
  assert (2 == pair->second && "pair->second should be 2");
  free(pair);
}

static void test_find_connection(void) {
  Pair *pair = create_pair(1, 2);
  Pair *found_pair = find_connection(pair);

  assert (1 == found_pair->first && "pair->first should be 1");
  assert (2 == found_pair->second && "pair->second should be 2");
  free(pair);
}

int main (void) {
  test_create_pair();
  test_find_connection();
}

