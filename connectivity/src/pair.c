#include <stdio.h>
#include <stdlib.h>
#include <pair.h>

Pair * create_pair(int first, int second) {
  Pair *pair = (Pair *) malloc(sizeof(Pair));
  pair->first = first;
  pair->second = second;

  return pair;
}

