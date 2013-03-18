/**
 * The pair.h file.
 *
 * A pair of ints.
 */

#ifndef PAIR_H
#define PAIR_H

#define TRUE 1
#define FALSE 0
typedef int BOOL;

typedef struct pair {
  int first;
  int second;
} Pair;

Pair * create_pair(int, int);

#endif

